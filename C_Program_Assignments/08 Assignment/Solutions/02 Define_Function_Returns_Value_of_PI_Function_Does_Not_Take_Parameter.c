#include<stdio.h>
#include<conio.h>

float Value();

int main()
{
    printf("\n Welcome To Main");

    printf("\n Function Returns => %f",Value());

    printf("\n Back To Main");
    getch();
    return 0;
}

float Value()
{
    float PI = 3.14;

    printf("\n\n Value of PI = %0.2f ", PI);

    PI = 15.564654;

    getch();
    return PI;
}
