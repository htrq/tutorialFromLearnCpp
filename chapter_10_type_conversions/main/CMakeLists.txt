cmake_minimum_required(VERSION 3.5)

project(main LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file (GLOB SOURCES
    arithmetic_conversions/arithmetic_conversions.cpp
    arithmetic_conversions/arithmetic_conversions.h
)

add_executable(main main.cpp ${SOURCES})

install(TARGETS main
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
