cmake_minimum_required(VERSION 3.5)

project(chapter_7 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file (GLOB SOURCES
    section2/section2.h
    section2/section2.cpp
)

add_executable(chapter_7 main.cpp ${SOURCES})

install(TARGETS chapter_7
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
