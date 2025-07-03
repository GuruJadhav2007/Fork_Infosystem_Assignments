#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0, Multi = 0;

    printf("\n Hello ");

    printf("\n\n Enter 2 Numbers To Perform Multiplication.");

    printf("\n\n\t Enter 1st number : ");
    scanf("%d",&No1);

    printf("\n\n\t Enter 2nd number : ");
    scanf("%d",&No2);


    Multi = No1 * No2;

    printf("\n\n Multiplication of %d and %d is : %d",No1,No2,Multi);

    getch();
    return 0;

}

