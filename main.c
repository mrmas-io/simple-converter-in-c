#include "headers/essentials.h"
#include "number_conversion.c"
#include "temperature_converter.c"
#include "length_converter.c"

int main()/*int argc, char const *argv[]*/
{
    system("cls");
    system("COLOR E1");
    menu();
    return 0;
}
void menu()
{
    system("cls");
    goto_xy(X+3, Y-2);
    printf("%c", 0x11);
    HEADr(36, 0xB2, 0);
    printf(" MAIN MENU ");
    HEADr(36, 0xB2, 0);
    printf("%c", 0x10);


    goto_xy(X+6, Y);
    printf("%c This is a simple C converter, Select one from the options below.", 0x1A);

    goto_xy(X+9, Y+2);
    printf("1.) Number Conversion.");
    goto_xy(X+9, Y+4);
    printf("2.) Temperature Converter.");
    goto_xy(X+9, Y+6);
    printf("3.) Length Converter.");

    option:
    goto_xy(X+9,Y+8);
    switch(getch())
    {
        case '1' :
            number_conversion();
            break;
        case '2' :
            temperature_converter();
            break;
        case '3' :
            length_converter();
            break;
        case CTRL('c') :
        case CTRL('q') :
            exit(0);
            break;
        default :
            goto option;
            break;
    }
}