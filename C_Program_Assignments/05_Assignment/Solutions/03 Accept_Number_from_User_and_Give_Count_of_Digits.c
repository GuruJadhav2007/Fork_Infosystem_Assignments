#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, dCnt = 0;

    printf("\n Enter Number : ");
    scanf("%d",&No);

    while(No != 0)
    {
        dCnt++;
        No = No /10;

    }

    printf("\n\n Total Digits in Given Number is %d.",dCnt);

    getch();
    return 0;
}
