#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Fact = 1, Temp = 0;

    printf("\n\n Enter Number to Give Factorial : ");
    scanf("%d",&No);

    Temp = No;

    while( Temp > 1 )
    {
        Fact *= Temp;
        Temp--;
    }

    printf("\n %d ",Fact);

    getch();
    return 0;
}
