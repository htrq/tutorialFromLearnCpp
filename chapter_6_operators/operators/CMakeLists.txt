cmake_minimum_required(VERSION 3.5)

project(operators LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SOURCES
    section1/*.h
    section1/*.cpp
)

add_executable(operators main.cpp ${SOURCES})

install(TARGETS operators
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
