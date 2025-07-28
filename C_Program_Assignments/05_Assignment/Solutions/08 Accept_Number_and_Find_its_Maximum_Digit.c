#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Max = 0, i = 0;

    printf("\n Enter Number : ");
    scanf("%d",&No);

    for(i = 0; i < No; i++)
    {
        if(i < No)
        {
            Max = No;
        }
    }

    printf("\n\n Maximum Number is : %d",Max);

    getch();
    return 0;
}
