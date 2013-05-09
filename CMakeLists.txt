project(get-to-know-unittests)
cmake_minimum_required(VERSION 2.8)

set(SRC_LIST
	src/main.cpp
)

add_executable(${PROJECT_NAME} ${SRC_LIST})

