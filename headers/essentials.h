//
// Created by MrMas on 21.12.2022.
//
#ifndef SIMPLE_CONVERTER_IN_C_ESSENTIALS_H
#define SIMPLE_CONVERTER_IN_C_ESSENTIALS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
#define CTRL(key) ((key) & 0x1f)
#define size 512

void menu();
void number_conversion();
void temperature_converter();
void celsius_to_all();
void fahrenheit_to_all();
void kelvin_to_all();
void rankine_to_all();
void binary_to_all();
void decimal_to_all();
void octal_to_all();
void hexadecimal_to_all();
char ch;
double celsius, fahrenheit, kelvin, rankine, length;
long long octal, binary, decimal, hexadecimal, rem, expo;
long long temp_bin, temp_dec, temp_hex, temp_oct;
long long bin[size], oct[size], hex[size];
extern void goto_xy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
int X = 26, Y = 3;//for the xy coordinates.
#define HEADr(count, output, delay)         \
    for(int i = 0; i<=(count); i++)         \
    {                                       \
        Sleep((delay));                     \
        printf("%c", output);               \
    }
#endif //SIMPLE_CONVERTER_IN_C_ESSENTIALS_H
