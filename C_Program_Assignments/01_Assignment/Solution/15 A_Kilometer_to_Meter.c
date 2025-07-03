#include<stdio.h>
#include<conio.h>

int main()
{
    float km = 0.0, mtr = 0.0;

    printf("\n Hello");

    printf("\n\n Enter number to convert kilometer to meter : ");
    scanf("%f",&km);

    mtr = km * 1000;

    printf("\n\n %f kilometer = %f meter ",km,mtr);

    getch();
    return 0;
}
