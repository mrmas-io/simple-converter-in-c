//
// Created by MrMas on 22.12.2022.
//
#include "headers/essentials.h"

void temperature_converter()
{
    system("cls");
    goto_xy(X+2, Y-2);
    printf("%c", 0x11);
    HEADr(32, 0xB2, 0);
    printf(" TEMPERATURE CONVERTER ");
    HEADr(32, 0xB2, 0);
    printf("%c", 0x10);

    goto_xy(X+6, Y);
    printf("1.) CELSIUS/CENTIGRADE");
    goto_xy(X+9, Y+2);
    printf("%c Celsius to Fahrenheit", 0x1A);
    goto_xy(X+9, Y+4);
    printf("%c Celsius to Kelvin", 0x1A);
    goto_xy(X+9, Y+6);
    printf("%c Celsius to Rankine", 0x1A);

    goto_xy(X+6, Y+10);
    printf("3.) KELVIN");
    goto_xy(X+9, Y+12);
    printf("%c Kelvin to Celsius", 0x1A);
    goto_xy(X+9, Y+14);
    printf("%c Kelvin to Fahrenheit", 0x1A);
    goto_xy(X+9, Y+16);
    printf("%c Kelvin to Rankine", 0x1A);

    goto_xy(X+63, Y);
    printf("2.) FAHRENHEIT");
    goto_xy(X+66, Y+2);
    printf("%c Fahrenheit to Celsius", 0x1A);
    goto_xy(X+66, Y+4);
    printf("%c Fahrenheit to Kelvin", 0x1A);
    goto_xy(X+66, Y+6);
    printf("%c Fahrenheit to Rankine", 0x1A);

    goto_xy(X+63, Y+10);
    printf("4.) RANKINE");
    goto_xy(X+66, Y+12);
    printf("%c Rankine to Celsius", 0x1A);
    goto_xy(X+66, Y+14);
    printf("%c Rankine to Fahrenheit", 0x1A);
    goto_xy(X+66, Y+16);
    printf("%c Rankine to Kelvin", 0x1A);

    t_option:
    goto_xy(X+9, Y+19);
    switch (getch())
    {
        case '1' :
            celsius_to_all();
            break;
        case '2' :
            fahrenheit_to_all();
            break;
        case '3' :
            kelvin_to_all();
            break;
        case '4' :
            rankine_to_all();
            break;
        case CTRL('c') :
        case CTRL('q') :
            exit(0);
            break;
        default :
            goto t_option;
            break;
    }
}
void celsius_to_all()
{
    system("cls");
    goto_xy(X+2, Y-2);
    printf("%c", 0x11);
    HEADr(32, 0xB2, 0);
    printf(" TEMPERATURE CONVERTER ");
    HEADr(32, 0xB2, 0);
    printf("%c", 0x10);

    goto_xy(X+6, Y);
    printf("%c Enter The Temperature In Celsius : ", 0x4);
    scanf("%lf", &celsius);

    fahrenheit = ((celsius * 1.8) + 32);
    kelvin = (celsius + 273.15);
    rankine = ((celsius * 1.8) + 491.67);

    goto_xy(X+9, Y+2);
    printf("%c %.2lf%cC = %.2lf%cF", 0x1A, celsius, 248, fahrenheit, 248);
    goto_xy(X+9, Y+4);
    printf("%c %.2lf%cC = %.2lf%cK", 0x1A, celsius, 248, kelvin, 248);
    goto_xy(X+9, Y+6);
    printf("%c %.2lf%cC = %.2lf%cR", 0x1A, celsius, 248, rankine, 248);

    goto_xy(X+6, Y+8);
    printf("Press 'T' to make another temperature conversion or any other key to go back to the main menu.");
    goto_xy(X+9, Y+10);
    ch = getch();
    if (ch == 'T' || ch == 't')
        temperature_converter();
    else if (ch == CTRL('c') || ch == CTRL('q'))
        exit(0);
    else
        menu();
}
void fahrenheit_to_all()
{
    system("cls");
    goto_xy(X+2, Y-2);
    printf("%c", 0x11);
    HEADr(32, 0xB2, 0);
    printf(" TEMPERATURE CONVERTER ");
    HEADr(32, 0xB2, 0);
    printf("%c", 0x10);

    goto_xy(X+6, Y);
    printf("%c Enter The Temperature In Fahrenheit : ", 0x4);
    scanf("%lf", &fahrenheit);

    celsius = ((fahrenheit - 32) * .5556);
    kelvin = ((((fahrenheit - 32) * 5) / 9) + 273.15);
    rankine = (fahrenheit + 459.67);

    goto_xy(X+9, Y+2);
    printf("%c %.2lf%cF = %.2lf%cC", 0x1A, fahrenheit, 248, celsius, 248);
    goto_xy(X+9, Y+4);
    printf("%c %.2lf%cF = %.2lf%cK", 0x1A, fahrenheit, 248, kelvin, 248);
    goto_xy(X+9, Y+6);
    printf("%c %.2lf%cF = %.2lf%cR", 0x1A, fahrenheit, 248, rankine, 248);

    goto_xy(X+6, Y+8);
    printf("Press 'T' to make another temperature conversion or any other key to go back to the main menu.");
    goto_xy(X+9, Y+10);
    ch = getch();
    if (ch == 'T' || ch == 't')
        temperature_converter();
    else if (ch == CTRL('c') || ch == CTRL('q'))
        exit(0);
    else
        menu();
}
void kelvin_to_all()
{
    system("cls");
    goto_xy(X+2, Y-2);
    printf("%c", 0x11);
    HEADr(32, 0xB2, 0);
    printf(" TEMPERATURE CONVERTER ");
    HEADr(32, 0xB2, 0);
    printf("%c", 0x10);

    goto_xy(X+6, Y);
    printf("%c Enter The Temperature In Kelvin : ", 0x4);
    scanf("%lf", &kelvin);

    celsius = (kelvin - 273.15);
    fahrenheit = ((((kelvin - 273.15) * 9) / 5) + 32);
    rankine = (kelvin * 1.8);

    goto_xy(X+9, Y+2);
    printf("%c %.2lf%cch = %.2lf%cC", 0x1A, kelvin, 248, celsius, 248);
    goto_xy(X+9, Y+4);
    printf("%c %.2lf%cch = %.2lf%cF", 0x1A, kelvin, 248, fahrenheit, 248);
    goto_xy(X+9, Y+6);
    printf("%c %.2lf%cch = %.2lf%cR", 0x1A, kelvin, 248, rankine, 248);

    goto_xy(X+6, Y+8);
    printf("Press 'T' to make another temperature conversion or any other key to go back to the main menu.");
    goto_xy(X+9, Y+10);
    ch = getch();
    if (ch == 'T' || ch == 't')
        temperature_converter();
    else if (ch == CTRL('c') || ch == CTRL('q'))
        exit(0);
    else
        menu();
}
void rankine_to_all()
{
    system("cls");
    goto_xy(X+2, Y-2);
    printf("%c", 0x11);
    HEADr(32, 0xB2, 0);
    printf(" TEMPERATURE CONVERTER ");
    HEADr(32, 0xB2, 0);
    printf("%c", 0x10);

    goto_xy(X+6, Y);
    printf("%c Enter The Temperature In Rankine : ", 0x4);
    scanf("%lf", &rankine);

    celsius = ((rankine - 491.67) * (double)5/9);
    fahrenheit = (rankine - 459.67);
    kelvin = (rankine * (double)5/9);

    goto_xy(X+9, Y+2);
    printf("%c %.2lf%cR = %.2lf%cC", 0x1A, rankine, 248, celsius, 248);
    goto_xy(X+9, Y+4);
    printf("%c %.2lf%cR = %.2lf%cF", 0x1A, rankine, 248, fahrenheit, 248);
    goto_xy(X+9, Y+6);
    printf("%c %.2lf%cR = %.2lf%cK", 0x1A, rankine, 248, kelvin, 248);

    goto_xy(X+6, Y+8);
    printf("Press 'T' to make another temperature conversion or any other key to go back to the main menu.");
    goto_xy(X+9, Y+10);
    ch = getch();
    if (ch == 'T' || ch == 't')
        temperature_converter();
    else if (ch == CTRL('c') || ch == CTRL('q'))
        exit(0);
    else
        menu();
}