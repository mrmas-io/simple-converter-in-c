//
// Created by MrMas on 22.12.2022.
//
#include "headers/essentials.h"
void subheader()
{
    system("cls");
    goto_xy(X+3, Y-2);
    printf("%c", 0x11);
    HEADr(32, 0xB2, 0);
    printf(" NUMBER CONVERSION ");
    HEADr(32, 0xB2, 0);
    printf("%c", 0x10);
}
void number_conversion()
{
    system("cls");
    goto_xy(X+3, Y-2);
    printf("%c", 0x11);
    HEADr(32, 0xB2, 0);
    printf(" NUMBER CONVERSION ");
    HEADr(32, 0xB2, 0);
    printf("%c", 0x10);

    goto_xy(X+6, Y);
    printf("1.) BASE 10 [DECIMAL]");
    goto_xy(X+9, Y+2);
    printf("%c Decimal to Binary", 0x1A);
    goto_xy(X+9, Y+4);
    printf("%c Decimal to Octal", 0x1A);
    goto_xy(X+9, Y+6);
    printf("%c Decimal to Hexadecimal", 0x1A);

    goto_xy(X+6, Y+10);
    printf("3.) BASE 8 [OCTAL]");
    goto_xy(X+9, Y+12);
    printf("%c Octal to Decimal", 0x1A);
    goto_xy(X+9, Y+14);
    printf("%c Octal to Binary", 0x1A);
    goto_xy(X+9, Y+16);
    printf("%c Octal to Hexadecimal", 0x1A);

    goto_xy(X+63, Y);
    printf("2.) BASE 2 [BINARY]");
    goto_xy(X+66, Y+2);
    printf("%c Binary to Decimal", 0x1A);
    goto_xy(X+66, Y+4);
    printf("%c Binary to Octal", 0x1A);
    goto_xy(X+66, Y+6);
    printf("%c Binary to Hexadecimal", 0x1A);

    goto_xy(X+63, Y+10);
    printf("4.) BASE 16 [HEXADECIMAL]");
    goto_xy(X+66, Y+12);
    printf("%c Hexadecimal to Decimal", 0x1A);
    goto_xy(X+66, Y+14);
    printf("%c Hexadecimal to Binary", 0x1A);
    goto_xy(X+66, Y+16);
    printf("%c Hexadecimal to Octal", 0x1A);

    n_option:
    goto_xy(X+9, Y+19);
    switch (getch())
    {
        case '1' :
            decimal_to_all();
            break;
        case '2' :
            binary_to_all();
            break;
        case '3' :
            octal_to_all();
            break;
        case '4' :
            hexadecimal_to_all();
            break;
        case CTRL('c'):
        case CTRL('q'):
            exit(0);
            break;
        default  :
            goto n_option;
            break;
    }
}

void binary_to_all()
{
    bin:
    subheader();
    decimal = 0;
    goto_xy(X+6, Y);
    printf("%c Enter the number in binary : ", 0x4);
    scanf("%lld", &binary);

    temp_dec = binary;
    expo = 0;
    int i=0, j=0, k=0, len1=0, len2=0, len3=0;

    if(temp_dec % 10 > 1){
        goto_xy(X+6, Y+2);
        printf("%c Invalid Input.", 0x1A);
        goto bin;
    }
    while(temp_dec != 0){
        rem = temp_dec % 10;
        decimal += rem * (pow(2, expo));
        temp_dec /= 10;
        expo += 1;
    }
    temp_hex = temp_oct = decimal;

    while (temp_oct)
    {
        oct[i++] = temp_oct % 8;
        temp_oct /= 8;
        len1 += 1;
    }
    while (temp_hex)
    {
        hex[j++] = temp_hex % 16;
        temp_hex /= 16;
        len2 += 1;
    }

    goto_xy(X+9, Y+2);
    printf("%c %lld Base 2 = %lld Base 10", 0x1A, binary, decimal);

    goto_xy(X+9, Y+4);
    printf("%c %lld Base 2 = ", 0x1A, binary);
    for(int l = len1-1; l >= 0; l--){
        printf("%lld", oct[l]);
    }
    printf(" Base 8");

    goto_xy(X+9, Y+6);
    printf("%c %lld Base 2 = ", 0x1A, binary);
    for(int l = len2-1; l >= 0; l--){
        if (hex[l] > 9){
            printf("%llx", hex[l]);
        }
        else
        {
            printf("%lld", hex[l]);
        }
    }
    printf(" Base 16");

    goto_xy(X+6, Y+8);
    printf("Press 'N' to make another temperature conversion or any other key to go back to the main menu.");
    goto_xy(X+9, Y+10);
    ch = getch();
    if (ch == 'N' || ch == 'n')
        number_conversion();
    else if (ch == CTRL('c') || ch == CTRL('q'))
        exit(0);
    else
        menu();
}
void decimal_to_all()
{
    system("cls");
    goto_xy(X+2, Y-2);
    printf("%c", 0x11);
    HEADr(32, 0xB2, 0);
    printf(" NUMBER CONVERSION ");
    HEADr(32, 0xB2, 0);
    printf("%c", 0x10);

    int i=0, j=0, k=0, len1=0, len2=0, len3=0;
    goto_xy(X+6, Y);
    printf("%c Enter the number in decimal : ", 0x4);
    scanf("%lld", &decimal);
    temp_oct = temp_hex = temp_bin = decimal;
    while (temp_oct)
    {
        oct[i++] = temp_oct % 8;
        temp_oct /= 8;
        len1 += 1;
    }
    while (temp_hex)
    {
        hex[j++] = temp_hex % 16;
        temp_hex /= 16;
        len2 += 1;
    }
    while (temp_bin)
    {
        bin[k++] = temp_bin % 2;
        temp_bin /= 2;
        len3 += 1;
    }
    goto_xy(X+9, Y+2);
    printf("%c %lld Base 10 = ", 0x1A, decimal);
    for(int l = len1-1; l >= 0; l--){
        printf("%lld", oct[l]);
    }
    printf(" Base 8");

    goto_xy(X+9, Y+4);
    printf("%c %lld Base 10 = ", 0x1A, decimal);
    for(int l = len2-1; l >= 0; l--){
        if (hex[l] > 9){
            printf("%llx", hex[l]);
        }
        else
        {
            printf("%lld", hex[l]);
        }
    }
    printf(" Base 16");

    goto_xy(X+9, Y+6);
    printf("%c %lld Base 10 = ", 0x1A, decimal);
    for(int l = len3-1; l >= 0; l--){
        printf("%lld", bin[l]);
    }
    printf(" Base 2");

    goto_xy(X+6, Y+8);
    printf("Press 'N' to make another temperature conversion or any other key to go back to the main menu.");
    goto_xy(X+9, Y+10);
    ch = getch();
    if (ch == 'N' || ch == 'n')
        number_conversion();
    else if (ch == CTRL('c') || ch == CTRL('q'))
        exit(0);
    else
        menu();
}
void octal_to_all()
{
    system("cls");
    goto_xy(X+2, Y-2);
    printf("%c", 0x11);
    HEADr(32, 0xB2, 0);
    printf(" NUMBER CONVERSION ");
    HEADr(32, 0xB2, 0);
    printf("%c", 0x10);

    int i=0, j=0, k=0, len1=0, len2=0, len3=0;
    goto_xy(X+6, Y);
    printf("%c Enter the number in decimal : ", 0x4);
    scanf("%llo", &octal);

    temp_dec = octal;
    while(temp_dec){
        rem = temp_dec % 10;
        decimal += rem * (pow(8, expo));
        temp_dec /= 10;
        expo += 1;
    }
    temp_hex = temp_bin = decimal;
    while (temp_hex)
    {
        hex[j++] = temp_hex % 16;
        temp_hex /= 16;
        len2 += 1;
    }
    while (temp_bin)
    {
        bin[k++] = temp_bin % 2;
        temp_bin /= 2;
        len3 += 1;
    }

    goto_xy(X+9, Y+2);
    printf("%c %llo Base 8 = %lld Base 10", 0x1A, octal, decimal);

    goto_xy(X+9, Y+4);
    printf("%c %llo Base 8 = ", 0x1A, octal);
    for(int l = len2-1; l >= 0; l--){
        if (hex[l] > 9){
            printf("%llx", hex[l]);
        }
        else
        {
            printf("%lld", hex[l]);
        }
    }
    printf(" Base 16");

    goto_xy(X+9, Y+6);
    printf("%c %llo Base 8 = ", 0x1A, octal);
    for(int l = len3-1; l >= 0; l--){
        printf("%lld", bin[l]);
    }
    printf(" Base 2");
    goto_xy(X+6, Y+8);
    printf("Press 'N' to make another temperature conversion or any other key to go back to the main menu.");
    goto_xy(X+9, Y+10);
    ch = getch();
    if (ch == 'N' || ch == 'n')
        number_conversion();
    else if (ch == CTRL('c') || ch == CTRL('q'))
        exit(0);
    else
        menu();
}
void hexadecimal_to_all()
{
    system("cls");
    goto_xy(X+2, Y-2);
    printf("%c", 0x11);
    HEADr(32, 0xB2, 0);
    printf(" NUMBER CONVERSION ");
    HEADr(32, 0xB2, 0);
    printf("%c", 0x10);

    int i=0, j=0, k=0, len1=0, len2=0, len3=0;
    goto_xy(X+6, Y);
    printf("%c Enter the number in Hexadecimal : ", 0x4);
    scanf("%llx", &hexadecimal);

    /*
    temp_dec = hexadecimal;
    while(temp_dec){
        rem = temp_dec % 10;
        decimal += rem * (pow(16, expo));
        temp_dec /= 10;
        expo += 1;
    }

    while (temp_oct)
    {
        oct[j++] = temp_hex % 8;
        temp_hex /= 8;
        len2 += 1;
    }*/
    temp_bin = decimal = hexadecimal;
    while (temp_bin)
    {
        bin[k++] = temp_bin % 2;
        temp_bin /= 2;
        len3 += 1;
    }

    goto_xy(X+9, Y+2);
    printf("%c %llx Base 16 = ", 0x1A, hexadecimal);
    for(int l = len2-1; l >= 0; l--){
        printf("%lld", oct[l]);
    }
    printf(" Base 8");

    goto_xy(X+9, Y+4);
    printf("%c %llx Base 16 = %lld Base 10", 0x1A, hexadecimal, decimal);

    goto_xy(X+9, Y+6);
    printf("%c %llx Base 16 = ", 0x1A, hexadecimal);
    for(int l = len3-1; l >= 0; l--){
        printf("%lld", bin[l]);
    }
    printf(" Base 2");

    goto_xy(X+6, Y+8);
    printf("Press 'N' to make another temperature conversion or any other key to go back to the main menu.");
    goto_xy(X+9, Y+10);
    ch = getch();
    if (ch == 'N' || ch == 'n')
        number_conversion();
    else if (ch == CTRL('c') || ch == CTRL('q'))
        exit(0);
    else
        menu();
}