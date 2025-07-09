#include<stdio.h>
#include<conio.h>

int main()
{
    float Area = 0.0, Side = 0.0;

    printf("\n Hello");

    printf("\n\n Enter Side Length To Find Area Of Square : ");

    printf("\n\n Enter Side : ");
    scanf("%f",&Side);

    Area  = Side * Side;

    printf("\n\n Area of square is : %f * %f = %f.",Side,Side,Area);

    getch();
    return 0;

}
