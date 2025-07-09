#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0;


    printf(" Enter 1st number : ");
    scanf("%d",&No1);

    printf("\n\n Enter 2nd number : ");
    scanf("%d",&No2);

    printf("\n\n Before Swapping => \n\n First Number is : %d \n\n Second Number is : %d \n\n",No1,No2);

    No1 = No1 + No2;
    No2 = No1 - No2;
    No1 = No1 - No2;

    getch();

    printf("\n\n After Swapping => \n\n First Number is : %d \n\n Second Number is : %d \n\n",No1,No2);


    getch();
    return 0;
}
