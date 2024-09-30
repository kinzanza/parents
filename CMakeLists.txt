cmake_minimum_required(VERSION 3.5) 

project(Budget LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(main main.cpp Parser.cpp Finder.cpp)