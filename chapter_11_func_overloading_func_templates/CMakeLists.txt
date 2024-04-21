cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(func_overload_func_templates VERSION 1.0)

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(main  src/main.cpp ${SRC_FILES})
target_include_directories(main PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


