#include<stdio.h>
#include<conio.h>

int main()
{
    float km = 0.0, mtr = 0.0;

    printf("\n Hello");

    printf("\n\n Enter number to convert kilometer to meter : ");
    scanf("%f",&mtr);

    km = mtr / 1000;

    printf("\n\n %.2f meter = %.2f kilometer ",mtr,km);

    getch();
    return 0;
}
