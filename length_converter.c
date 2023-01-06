//
// Created by MrMas on 22.12.2022.
//
#include "headers/essentials.h"
void subhead()
{
    system("cls");
    goto_xy(X+2, Y-2);
    printf("%c", 0x11);
    HEADr(34, 0xB2, 0);
    printf(" LENGTH CONVERTER ");
    HEADr(34, 0xB2, 0);
    printf("%c", 0x10);
}
void length_converter()
{
    subhead();
    goto_xy(X+9, Y);
    printf("1.) Feet To Meters, CentiMeters, & MilliMeters");
    goto_xy(X+9, Y+2);
    printf("3.) Inches To Meters, CentiMeters, & MilliMeters");
    goto_xy(X+9, Y+4);
    printf("5.) Mile To Meters, CentiMeters, & MilliMeters");
    goto_xy(X+9, Y+6);
    printf("7.) Yard To Meters, CentiMeters, & MilliMeters");
    goto_xy(X+66, Y);
    printf("2.) Meters To Feet");
    goto_xy(X+66, Y+2);
    printf("4.) Meters To Inches");
    goto_xy(X+66, Y+4);
    printf("6.) Meters To Mile");
    goto_xy(X+66, Y+6);
    printf("8.) Meters To Feet");

    goto_xy(X+6, Y+8);
    HEADr(82, 0x5F, 0);
    goto_xy(X+9, Y+10);
    printf("a.) Miles To Yard");
    goto_xy(X+66, Y+10);
    printf("b.) Yard To Miles");
    goto_xy(X+9, Y+12);
    printf("c.) Miles To Feet");
    goto_xy(X+66, Y+12);
    printf("d.) Feet To Miles");
    goto_xy(X+9, Y+14);
    printf("e.) Miles To Inches");
    goto_xy(X+66, Y+14);
    printf("f.) Inches To Miles");

    goto_xy(X+9, Y+16);
    printf("g.) Feet To Yard");
    goto_xy(X+66, Y+16);
    printf("h.) Yard To Feet");
    goto_xy(X+9, Y+18);
    printf("i.) Feet To Inches");
    goto_xy(X+66, Y+18);
    printf("j.) Inches To Feet");
    goto_xy(X+9, Y+20);
    printf("k.) Yard To Inches");
    goto_xy(X+66, Y+20);
    printf("l.) Inches To Yard");

    l_option:
    goto_xy(X+9, Y+22);
    switch (getch())
    {
        case '1' :
            subhead();
            goto_xy(X+9, Y);
            printf("%c Enter the Length in Feet : ", 0x4);
            scanf("%lf", &length);
            goto_xy(X+12, Y+2);
            printf("%lf Feet = %lf Meters", length, (length * 0.3048));
            goto_xy(X+12, Y+4);
            printf("%lf Feet = %lf CentiMeters", length, (length * 0.3048) * 100);
            goto_xy(X+12, Y+6);
            printf("%lf Feet = %lf KiloMeters", length, (length * 0.3048) / 1000);
            goto_xy(X+9, Y+8);
            printf("Press 'L' to do another conversion or any other key to go back to the main menu.");
            goto_xy(X+12, Y+10);

            ch = getch();
            if (ch == 'L' || ch == 'l')
                length_converter();
            else if (ch == CTRL('c') || ch == CTRL('q'))
                exit(0);
            else
                menu();
            break;

        case '2' :
            subhead();
            goto_xy(X+9, Y);
            printf("%c Enter the Length in Meters : ", 0x4);
            scanf("%lf", &length);
            goto_xy(X+12, Y+2);
            printf("%lf Meters = %lf Feet", length, (length * 3.280839895));
            goto_xy(X+9, Y+4);
            printf("Press 'T' to do another conversion or any other key to go back to the main menu.");
            goto_xy(X+12, Y+6);

            ch = getch();
            if (ch == 'L' || ch == 'l')
                length_converter();
            else if (ch == CTRL('c') || ch == CTRL('q'))
                exit(0);
            else
                menu();
            break;

        case '3' :
            subhead();
            goto_xy(X+9, Y);
            printf("%c Enter the Length in Inches : ", 0x4);
            scanf("%lf", &length);
            goto_xy(X+12, Y+2);
            printf("%lf Inches = %lf Meters", length, (length * 0.0254));
            goto_xy(X+12, Y+4);
            printf("%lf Inches = %lf CentiMeters", length, (length * 0.0254) * 100);
            goto_xy(X+12, Y+6);
            printf("%lf Inches = %lf KiloMeters", length, (length * 0.0254) / 1000);
            goto_xy(X+9, Y+8);
            printf("Press 'L' to do another conversion or any other key to go back to the main menu.");
            goto_xy(X+12, Y+10);

            ch = getch();
            if (ch == 'L' || ch == 'l')
                length_converter();
            else if (ch == CTRL('c') || ch == CTRL('q'))
                exit(0);
            else
                menu();
            break;

        case '4' :
            subhead();
            goto_xy(X+9, Y);
            printf("%c Enter the Length in Meters : ", 0x4);
            scanf("%lf", &length);
            goto_xy(X+12, Y+2);
            printf("%lf Meters = %lf Inches", length, (length * 39.37007874));
            goto_xy(X+9, Y+4);
            printf("Press 'L' to do another conversion or any other key to go back to the main menu.");
            goto_xy(X+12, Y+6);

            ch = getch();
            if (ch == 'L' || ch == 'l')
                length_converter();
            else if (ch == CTRL('c') || ch == CTRL('q'))
                exit(0);
            else
                menu();
            break;

        case '5' :
            subhead();
            goto_xy(X+9, Y);
            printf("%c Enter the Length in Miles : ", 0x4);
            scanf("%lf", &length);
            goto_xy(X+12, Y+2);
            printf("%lf Mile = %lf Meters", length, (length * 207605.376));
            goto_xy(X+12, Y+4);
            printf("%lf Mile = %lf CentiMeters", length, (length * 207605.376) * 100);
            goto_xy(X+12, Y+6);
            printf("%lf Mile = %lf KiloMeters", length, (length * 207605.376) / 1000);
            goto_xy(X+9, Y+8);
            printf("Press 'L' to do another conversion or any other key to go back to the main menu.");
            goto_xy(X+12, Y+10);

            ch = getch();
            if (ch == 'L' || ch == 'l')
                length_converter();
            else if (ch == CTRL('c') || ch == CTRL('q'))
                exit(0);
            else
                menu();
            break;

        case '6' :
            subhead();
            goto_xy(X+9, Y);
            printf("%c Enter the Length in meters : ", 0x4);
            scanf("%lf", &length);
            goto_xy(X+12, Y+2);
            printf("%lf Meters = %lf Miles", length, (length * 0.0006213712));
            goto_xy(X+9, Y+4);
            printf("Press 'L' to do another conversion or any other key to go back to the main menu.");
            goto_xy(X+12, Y+6);

            ch = getch();
            if (ch == 'L' || ch == 'l')
                length_converter();
            else if (ch == CTRL('c') || ch == CTRL('q'))
                exit(0);
            else
                menu();
            //printf("%c Enter the Length in Meters : ", 0x4);
            break;

        case '7' :
            subhead();
            goto_xy(X+9, Y);
            printf("%c Enter the Length in Yards : ", 0x4);
            scanf("%lf", &length);
            goto_xy(X+12, Y+2);
            printf("%lf Yards = %lf Meters", length, (length * 0.9144));
            goto_xy(X+12, Y+4);
            printf("%lf Yards = %lf CentiMeters", length, (length * 0.9144) * 100);
            goto_xy(X+12, Y+6);
            printf("%lf Yards = %lf KiloMeters", length, (length * 0.9144) / 1000);
            goto_xy(X+9, Y+8);
            printf("Press 'L' to do another conversion or any other key to go back to the main menu.");
            goto_xy(X+12, Y+10);

            ch = getch();
            if (ch == 'L' || ch == 'l')
                length_converter();
            else if (ch == CTRL('c') || ch == CTRL('q'))
                exit(0);
            else
                menu();
            //printf("%c Enter the Length in Yards : ", 0x4);
            break;

        case '8' :
            subhead();
            goto_xy(X+9, Y);
            printf("%c Enter the Length in Meters : ", 0x4);
            scanf("%lf", &length);
            goto_xy(X+12, Y+2);
            printf("%lf Meters = %lf Yards", length, (length * 1.0936132983));
            goto_xy(X+9, Y+4);
            printf("Press 'L' to do another conversion or any other key to go back to the main menu.");
            goto_xy(X+12, Y+6);

            ch = getch();
            if (ch == 'L' || ch == 'l')
                length_converter();
            else if (ch == CTRL('c') || ch == CTRL('q'))
                exit(0);
            else
                menu();
            break;

        case 'A' :
        case 'a' :
            subhead();
            goto_xy(X+9, Y);
            printf("%c Enter the Length in Miles : ", 0x4);
            scanf("%lf", &length);
            goto_xy(X+12, Y+2);
            printf("%lf Miles = %lf Yards", length, (length * 1760));
            goto_xy(X+9, Y+4);
            printf("Press 'L' to do another conversion or any other key to go back to the main menu.");
            goto_xy(X+12, Y+6);

            ch = getch();
            if (ch == 'L' || ch == 'l')
                length_converter();
            else if (ch == CTRL('c') || ch == CTRL('q'))
                exit(0);
            else
                menu();
            break;
        case 'B' :
        case 'b' :
            subhead();
            goto_xy(X+9, Y);
            printf("%c Enter the Length in Yards : ", 0x4);
            scanf("%lf", &length);
            goto_xy(X+12, Y+2);
            printf("%lf Yards = %lf Miles", length, (length * 0.0005681818));
            goto_xy(X+9, Y+4);
            printf("Press 'L' to do another conversion or any other key to go back to the main menu.");
            goto_xy(X+12, Y+6);

            ch = getch();
            if (ch == 'L' || ch == 'l')
                length_converter();
            else if (ch == CTRL('c') || ch == CTRL('q'))
                exit(0);
            else
                menu();
            break;
        case 'C' :
        case 'c' :
            subhead();
            goto_xy(X+9, Y);
            printf("%c Enter the Length in Miles : ", 0x4);
            scanf("%lf", &length);
            goto_xy(X+12, Y+2);
            printf("%lf Miles = %lf Feet", length, (length * 5280));
            goto_xy(X+9, Y+4);
            printf("Press 'L' to do another conversion or any other key to go back to the main menu.");
            goto_xy(X+12, Y+6);

            ch = getch();
            if (ch == 'L' || ch == 'l')
                length_converter();
            else if (ch == CTRL('c') || ch == CTRL('q'))
                exit(0);
            else
                menu();
            break;
        case 'D' :
        case 'd' :
            subhead();
            goto_xy(X+9, Y);
            printf("%c Enter the Length in Feet : ", 0x4);
            scanf("%lf", &length);
            goto_xy(X+12, Y+2);
            printf("%lf Feet = %lf Miles", length, (length * 0.0001893939));
            goto_xy(X+9, Y+4);
            printf("Press 'L' to do another conversion or any other key to go back to the main menu.");
            goto_xy(X+12, Y+6);

            ch = getch();
            if (ch == 'L' || ch == 'l')
                length_converter();
            else if (ch == CTRL('c') || ch == CTRL('q'))
                exit(0);
            else
                menu();
            break;
        case 'E' :
        case 'e' :
            subhead();
            goto_xy(X+9, Y);
            printf("%c Enter the Length in Miles : ", 0x4);
            scanf("%lf", &length);
            goto_xy(X+12, Y+2);
            printf("%lf Miles = %lf Inches", length, (length * 63360));
            goto_xy(X+9, Y+4);
            printf("Press 'L' to do another conversion or any other key to go back to the main menu.");
            goto_xy(X+12, Y+6);

            ch = getch();
            if (ch == 'L' || ch == 'l')
                length_converter();
            else if (ch == CTRL('c') || ch == CTRL('q'))
                exit(0);
            else
                menu();
            break;
        case 'F' :
        case 'f' :
            subhead();
            goto_xy(X+9, Y);
            printf("%c Enter the Length in Inches : ", 0x4);
            scanf("%lf", &length);
            goto_xy(X+12, Y+2);
            printf("%lf Inches = %lf Miles", length, (length * 0.0000157828));
            goto_xy(X+9, Y+4);
            printf("Press 'L' to do another conversion or any other key to go back to the main menu.");
            goto_xy(X+12, Y+6);

            ch = getch();
            if (ch == 'L' || ch == 'l')
                length_converter();
            else if (ch == CTRL('c') || ch == CTRL('q'))
                exit(0);
            else
                menu();
            break;
        case 'G' :
        case 'g' :
            subhead();
            goto_xy(X+9, Y);
            printf("%c Enter the Length in Feet : ", 0x4);
            scanf("%lf", &length);
            goto_xy(X+12, Y+2);
            printf("%lf Feet = %lf Yards", length, (length * 0.3333333333));
            goto_xy(X+9, Y+4);
            printf("Press 'L' to do another conversion or any other key to go back to the main menu.");
            goto_xy(X+12, Y+6);

            ch = getch();
            if (ch == 'L' || ch == 'l')
                length_converter();
            else if (ch == CTRL('c') || ch == CTRL('q'))
                exit(0);
            else
                menu();
            break;
        case 'H' :
        case 'h' :
            subhead();
            goto_xy(X+9, Y);
            printf("%c Enter the Length in Yards : ", 0x4);
            scanf("%lf", &length);
            goto_xy(X+12, Y+2);
            printf("%lf Yards = %lf Feet", length, (length * 3));
            goto_xy(X+9, Y+4);
            printf("Press 'L' to do another conversion or any other key to go back to the main menu.");
            goto_xy(X+12, Y+6);

            ch = getch();
            if (ch == 'L' || ch == 'l')
                length_converter();
            else if (ch == CTRL('c') || ch == CTRL('q'))
                exit(0);
            else
                menu();
            break;
        case 'I' :
        case 'i' :
            subhead();
            goto_xy(X+9, Y);
            printf("%c Enter the Length in Feet : ", 0x4);
            scanf("%lf", &length);
            goto_xy(X+12, Y+2);
            printf("%lf Feet = %lf Inches", length, (length * 12));
            goto_xy(X+9, Y+4);
            printf("Press 'L' to do another conversion or any other key to go back to the main menu.");
            goto_xy(X+12, Y+6);

            ch = getch();
            if (ch == 'L' || ch == 'l')
                length_converter();
            else if (ch == CTRL('c') || ch == CTRL('q'))
                exit(0);
            else
                menu();
            break;
        case 'J' :
        case 'j' :
            subhead();
            goto_xy(X+9, Y);
            printf("%c Enter the Length in Inches : ", 0x4);
            scanf("%lf", &length);
            goto_xy(X+12, Y+2);
            printf("%lf Inches = %lf Feet", length, (length * 0.0833333333));
            goto_xy(X+9, Y+4);
            printf("Press 'L' to do another conversion or any other key to go back to the main menu.");
            goto_xy(X+12, Y+6);

            ch = getch();
            if (ch == 'L' || ch == 'l')
                length_converter();
            else if (ch == CTRL('c') || ch == CTRL('q'))
                exit(0);
            else
                menu();
            break;
        case 'K' :
        case 'k' :
            subhead();
            goto_xy(X+9, Y);
            printf("%c Enter the Length in Yards :", 0x4);
            scanf("%lf", &length);
            goto_xy(X+12, Y+2);
            printf("%lf Yards = %lf Inches", length, (length * 36));
            goto_xy(X+9, Y+4);
            printf("Press 'L' to do another conversion or any other key to go back to the main menu.");
            goto_xy(X+12, Y+6);

            ch = getch();
            if (ch == 'L' || ch == 'l')
                length_converter();
            else if (ch == CTRL('c') || ch == CTRL('q'))
                exit(0);
            else
                menu();
            break;
        case 'L' :
        case 'l' :
            subhead();
            goto_xy(X+9, Y);
            printf("%c Enter the Length in Inches : ", 0x4);
            scanf("%lf", &length);
            goto_xy(X+12, Y+2);
            printf("%lf Inches = %lf Yards", length, (length * 0.0277777778));
            goto_xy(X+9, Y+4);
            printf("Press 'L' to do another conversion or any other key to go back to the main menu.");
            goto_xy(X+12, Y+6);

            ch = getch();
            if (ch == 'L' || ch == 'l')
                length_converter();
            else if (ch == CTRL('c') || ch == CTRL('q'))
                exit(0);
            else
                menu();
            break;
        case CTRL('c') :
        case CTRL('q') :
            exit(0);
            break;
        default :
            goto l_option;
            break;
    }
}