cmake_minimum_required(VERSION 3.14)
project(_sortPersonStruct C)

set(CMAKE_C_STANDARD 90)

add_executable(_sortPersonStruct main.c sort.h sort.c person.h person.c)