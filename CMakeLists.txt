cmake_minimum_required(VERSION 3.25)
project(Figure)

set(CMAKE_CXX_STANDARD 17)

add_executable(Figure main.cpp Figure.h Square.h Circle.h)
