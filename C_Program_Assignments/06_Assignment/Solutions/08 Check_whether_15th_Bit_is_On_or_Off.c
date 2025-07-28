#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter Number : ");
    scanf("%d",&No);

    if((No >> 14) & 1)
    {
        printf("\n 15th Bit of Given Number %d is ON.",No);
    }

    else
    {
        printf("\n 15th Bit of Given Number %d is OFF.",No);
    }

    printf("\n\n ========================================================================");

    getch();
    return 0;
}
