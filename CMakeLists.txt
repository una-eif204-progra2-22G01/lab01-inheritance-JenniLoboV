#Primario
cmake_minimum_required(VERSION 3.21.1) #Modificado

project(lab01-inheritance-JenniLoboV)#Modificado

set(CMAKE_CXX_STANDARD 14)

#include_directories(.)
#add_executable(lab01_Inheritance src/Lab01Inheritance.cpp src/)
#add_executable(main.cpp)No funciono

include_directories(src)
add_subdirectory(src)
