cmake_minimum_required(VERSION 3.5)

project(project_for_learn LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


file(GLOB SOURCES
    conclusion/*.h
    conclusion/*.cpp
)
add_executable(project_for_learn conclusion/main.cpp ${SOURCES})


install(TARGETS project_for_learn
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
