#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter Number Less Than 10 : ");
    scanf("%d",&No);

    if(No <= 10)
    {
        printf("\n\n Hello");
    }

    else if(No >= 11)
    {
        printf("\n\n World");
    }

    else
    {
        printf("\n\n It is not number");
    }

    getch();
    return 0;
}
