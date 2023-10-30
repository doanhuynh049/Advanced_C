cmake_minimum_required(VERSION 3.15)
project(Advanced_C)

set(Advanced_C "Advanced_C")

add_executable(${Advanced_C} "main.c" "bitManupulator/ConvertingBinarytoDecimal.c")

target_link_libraries(${Advanced_C} m)