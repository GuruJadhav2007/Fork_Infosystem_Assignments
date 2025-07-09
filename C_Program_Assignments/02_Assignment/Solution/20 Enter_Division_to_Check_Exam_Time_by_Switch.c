#include<stdio.h>
#include<conio.h>

int main()

{
    char Div = '\0';

    printf("\n Enter Division (A,B,C,D) : ");
    Div = getche();

    switch(Div)
    {
        case 'A' :
        case 'a' :
                    printf("\n\n Your Exam at 10:00 am");

                    getch();
                    break;

        case 'B' :
        case 'b' :
                    printf("\n\n Your Exam at 10:30 am");

                    getch();
                    break;

        case 'C' :
        case 'c' :
                    printf("\n\n Your Exam at 01:00 pm");

                    getch();
                    break;

        case 'D' :
        case 'd' :
                    printf("\n\n Your Exam at 01:30 pm ");

                    getch();
                    break;

        default:
                    printf("\n\n No Division Exist");

                    getch();
                    break;
    }

    getch();
    return 0;
}
