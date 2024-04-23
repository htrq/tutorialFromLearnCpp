cmake_minimum_required(VERSION 3.5)

project(main LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



file(GLOB SOURCES
    section_4/section_4.h
    section_4/section_4.cpp
    constants/constants.h
    section_6/section_6.h
    section_6/section_6.cpp
    section_7/goto.h
    section_7/goto.cpp
    section_8/while_problem.h
    section_8/while_problem.cpp
    section_14/merssene_twister_example.h
    section_14/merssene_twister_example.cpp
)

add_executable(main main.cpp ${SOURCES})

install(TARGETS main
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
