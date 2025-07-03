#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0, Sum = 0;

    printf("\n Hello ");

    printf("\n\n Enter 2 Numbers To Perform Addition.");

    printf("\n\n\t Enter 1st number : ");
    scanf("%d",&No1);

    printf("\n\n\t Enter 2nd number : ");
    scanf("%d",&No2);


    Sum = No1 + No2;

    printf("\n\n Addition of %d and %d is : %d",No1,No2,Sum);

    getch();
    return 0;

}

