#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;


    printf("\n Hello ");
    scanf("%d",&No1);

    printf("\n\n Enter positive number : ");
    scanf("%d",&No);

    if(No>0)
    {
        printf("\n\n Welcome You Enter Positive Number");
    }
    else if(No==0)
    {
         printf("\n\n It is neither positive nor negative number");
    }
    else
    {
        printf("\n\n Sorry! It is negative number");
    }
    printf("\n\n Thank you for entering number");


    getch();
    return 0;
}
