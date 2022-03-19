#Primario
cmake_minimum_required(VERSION 3.21.1) #Modificado

#project(lab01_Inheritance) Modificado
project(lab01-inheritance-JenniLoboV)

set(CMAKE_CXX_STANDARD 14)

#include_directories(.)
#add_executable(main.cpp)

####lab01_Inheritance src/Lab01Inheritance.cpp src/

include_directories(src)
add_subdirectory(src)
