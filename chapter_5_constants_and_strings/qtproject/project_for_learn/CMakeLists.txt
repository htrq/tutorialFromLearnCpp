cmake_minimum_required(VERSION 3.5)

project(project_for_learn LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(project_for_learn section10/main.cpp)

install(TARGETS project_for_learn
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
