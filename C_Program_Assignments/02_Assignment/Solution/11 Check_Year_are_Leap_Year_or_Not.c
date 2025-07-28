#include<stdio.h>
#include<conio.h>

int main()
{
    short int Year = 0;

    printf("\n Enter year To Check its Leap Year or Not : ");
    scanf("%d",&Year);

    printf("\n =============================================\n");

    if(Year % 4 == 0)
    {
        printf("\n Given Year %d is Leap Year",Year);
    }
    else
    {
        printf("\n Given Year %d is Not Leap Year",Year);
    }

    printf("\n\n==============================================\n");

    printf("\n Thank You \n");

    getch();
    return 0;
}
