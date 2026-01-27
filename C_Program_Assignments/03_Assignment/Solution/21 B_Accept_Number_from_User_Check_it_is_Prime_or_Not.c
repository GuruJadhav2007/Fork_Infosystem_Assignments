#include<stdio.h>
#include<conio.h>
9
int main()
{
    int No = 0, i = 0;

    printf("\n Enter Number : ");
    scanf("%d",&No);

    if(No < 1)
    {
        printf("\n ! Invalid Input.");
        return 0;
    }
    else if(No == 1)
    {
        printf("\n 1 is Neutral.");
    }
    else
    {
        for(i = 2; i < No/2; i++)
        {
            if(No/2 % i == 0)
            {
                break;
            }
        }

        if(No/2 == i)
        {
            printf("\n Given Number %d is Prime.",No);
        }
        else
        {
            printf("\n Given Number %d is Not Prime.",No);
        }
    }

    printf("\n Thanks.");

    getch();
    return 0;
}

