set(SOURCES
	${SOURCES}
	${CMAKE_CURRENT_SOURCE_DIR}/binexprast.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/callexprast.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/forexprast.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/functionast.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ifexprast.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/numexprast.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/prototypeast.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/unaryexprast.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/varexprast.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/variableexprast.cpp
	PARENT_SCOPE
)

set(HEADERS
	${HEADERS}
	${CMAKE_CURRENT_SOURCE_DIR}/abstractast.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/binexprast.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/callexprast.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/exprast.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/forexprast.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/functionast.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ifexprast.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/numexprast.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/prototypeast.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/unaryexprast.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/varexprast.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/variableexprast.hpp
	PARENT_SCOPE
)
