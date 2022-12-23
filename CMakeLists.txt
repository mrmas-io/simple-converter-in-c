cmake_minimum_required(VERSION 3.23)
project(simple_converter_in_c C)

set(CMAKE_C_STANDARD 23)

add_executable(simple_converter_in_c main.c headers/essentials.h temperature_converter.c number_conversion.c length_converter.c)
