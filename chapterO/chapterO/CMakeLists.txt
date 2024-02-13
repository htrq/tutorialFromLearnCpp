cmake_minimum_required(VERSION 3.5)

project(chapterO LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



file (GLOB SOURCES
    O1/*.cpp
    O1/*.h
    O2/*.cpp
    O2/*.h
)

add_executable(chapterO main.cpp ${SOURCES})

install(TARGETS chapterO
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
