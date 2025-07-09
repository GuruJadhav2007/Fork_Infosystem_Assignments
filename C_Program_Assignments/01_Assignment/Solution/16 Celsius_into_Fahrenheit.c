#include<stdio.h>
#include<conio.h>

int main()
{
    float Deg = 0.0, Fah = 0.0;

    printf("\n Hello");

    printf("\n\n Enter number to convert Fahrenheit  to Degree Celsius : ");
    scanf("%f",&Fah);

    Deg = (Fah - 32) * (5/9);

    printf("\n\n %f Degree => %f Fahrenheit ",Deg,Fah);

    getch();
    return 0;
}
