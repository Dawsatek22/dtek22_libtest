cmake_minimum_required(VERSION 3.12)
project(sonar1  )





add_library(HC-SR04 HC-SR04.cpp)

add_executable(sonar sonar.cpp)
target_link_libraries(sonar PUBLIC HC-SR04)
target_link_libraries(sonar  PUBLIC -lwiringPi)

