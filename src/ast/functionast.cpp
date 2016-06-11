#include "functionast.hpp"

#include <llvm/IR/Verifier.h>

llvm::Function *CFunctionAST::codegen()
{
	auto& p = *m_Proto;
	m_IR.AddFunction(std::move(m_Proto));
	llvm::Function* f = m_IR.GetFunction(p.Name());
	if (!f)
		return nullptr;

	// Create a new basic block to start insertion into
	auto* bb = llvm::BasicBlock::Create(m_IR.Context(), "entry", f);
	m_IR.Builder().SetInsertPoint(bb);

	// Record the function arguments in the map
	m_IR.NamedValues().clear();
	for (auto& a : f->args())
		m_IR.NamedValues()[a.getName()] = &a;

	auto* r = m_Body->codegen();
	if (r) {
		// Finish off the function
		m_IR.Builder().CreateRet(r);

		// Validate the generated code, checking for consistency
		llvm::verifyFunction(*f);

		// Optimize function
		m_IR.FPM().run(*f);

		return f;
	}

	// Error reading body, remove function
	f->eraseFromParent();
	return nullptr;
}
