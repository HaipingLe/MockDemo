CMAKE_MINIMUM_REQUIRED(VERSION 2.8) 
PROJECT(MockTestDemo)    

MESSAGE("Identifying the OS...")
IF(WIN32)
    MESSAGE("This is Windows.")
ELSEIF(APPLE)
    MESSAGE("This is MacOS.")
ELSEIF(UNIX)
    MESSAGE("This is Linux.")
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
    SET(CMAKE_C_COMPILER "/usr/bin/gcc")
    SET(CMAKE_CXX_COMPILER "/usr/bin/g++")
ENDIF()

#path of header files
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include
                    ${GTEST_INCLUDE_DIRS}       
                                                )

#source files
FILE( GLOB_RECURSE SOURCES
         ${PROJECT_SOURCE_DIR}/src/*.cpp)

#header files
FILE( GLOB_RECURSE HEADERS
         ${PROJECT_SOURCE_DIR}/include/*.hpp)

add_executable( ${PROJECT_NAME} ${SOURCES} ${HEADERS} )
target_link_libraries(${PROJECT_NAME} gmock gtest pthread)