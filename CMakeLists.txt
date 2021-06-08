cmake_minimum_required(VERSION 3.10)

project(Shunting Yard VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB SOURCES
	src/*.cpp
)

add_executable(Evaluator ${SOURCES})

target_include_directories(Evaluator PUBLIC include)
