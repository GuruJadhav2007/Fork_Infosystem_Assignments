#include<stdio.h>
#include<conio.h>

int main()

{
    int No = 0;

    printf("\n\n Enter Number between 1 - 7 : ");
    scanf("%d",&No);

    switch(No)
    {
        case 1 :
                    printf("\n\n Monday");

                    getch();
                    break;

        case 2 :
                    printf("\n\n Tuesday");

                    getch();
                    break;

        case 3 :
                    printf("\n\n Wednesday");

                    getch();
                    break;

        case 4 :
                    printf("\n\n Thursday");

                    getch();
                    break;

        case 5 :
                    printf("\n\n Friday");

                    getch();
                    break;

        case 6 :
                    printf("\n\n Saturday");

                    getch();
                    break;

        case 7 :
                    printf("\n\n Sunday");

                    getch();
                    break;
        default :
                    printf("\n\n Invalid Number");

                    break;
    }
}
