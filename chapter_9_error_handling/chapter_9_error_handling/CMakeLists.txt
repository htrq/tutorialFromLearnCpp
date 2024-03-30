cmake_minimum_required(VERSION 3.5)

project(chapter_9_error_handling LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



file(GLOB SOURCES
    section_5/cin_handling.h
    section_5/cin_handling.cpp

)

add_executable(main main.cpp ${SOURCES})

install(TARGETS main
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
