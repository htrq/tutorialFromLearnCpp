cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(conclusion VERSION 1.0)

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(conclusion  src/conclusion.cpp ${SRC_FILES})
target_include_directories(conclusion PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


