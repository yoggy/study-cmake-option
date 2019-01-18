cmake_minimum_required(VERSION 3.1)

project(study-cmake-option)

option(USE_PROCESS2 "use process2.c" OFF)

set(SRC main.c)

if(USE_PROCESS2)
  set(SRC ${SRC} process2.c)
else()
  set(SRC ${SRC} process1.c)
endif()

add_executable(a.out ${SRC})

message(STATUS "USE_PROCESS2=${USE_PROCESS2}")
message(STATUS "SRC=${SRC}")
