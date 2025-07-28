#include<stdio.h>
#include<conio.h>

int main()
{
    char vol = '\0';

    printf("\n Enter character to check its vowel : ");
    scanf("%c",&vol);

    switch(vol)
    {

        case 'a':
        case 'A':
                 printf("\n\n It is vowel");
             break;


        case 'e':
        case 'E':
                printf("\n\n It is vowel");
             break;


        case 'i':
        case 'I':
                 printf("\n\n It is vowel");
             break;

        case 'o':
        case 'O':
                 printf("\n\n It is vowel");
             break;

        case 'u':
        case 'U':
                 printf("\n\n It is vowel");
            break;

        case 'b':
        case 'B':
        case 'c':
        case 'C':
        case 'd':
        case 'D':
        case 'f':
        case 'F':
        case 'g':
        case 'G':
        case 'h':
        case 'H':
        case 'j':
        case 'J':
        case 'k':
        case 'K':
        case 'l':
        case 'L':
        case 'm':
        case 'M':
        case 'n':
        case 'N':
        case 'p':
        case 'P':
        case 'q':
        case 'Q':
        case 'r':
        case 'R':
        case 's':
        case 'S':
        case 't':
        case 'T':
        case 'v':
        case 'V':
        case 'w':
        case 'W':
        case 'x':
        case 'X':
        case 'y':
        case 'Y':
        case 'z':
        case 'Z':

                 printf("\n\n It is Consonant");
            break;


        default:
                  printf("\n\n It is a Special Symbol.");
           break;
    }


    getch();
    return 0;
}
