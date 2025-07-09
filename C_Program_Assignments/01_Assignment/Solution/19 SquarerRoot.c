#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int No = 0, Sqr_Rt = 0;

    printf("\n Hello");

    printf("\n\n Enter number to create its SquareRoot : ");
    scanf("%d",&No);

    Sqr_Rt = Sqrt(No);

    printf("\n\n SquareRoot of %d is => %d",No ,Sqr_Rt);

    printf("\n\n Thank You");

    getch();
    return 0;
}

