#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, i = 0, oCnt = 0;

    Up:

    printf("\n\n Enter Positive Number : ");
    scanf("%d",&No);

    if( No > 0)
    {
        if( No % 2 == 1)
       {
           printf("\n\n Given Number is Odd.");
       }

       else
       {
           printf("\n\n Given Number is Not Odd");
       }
    }

    else
    {
        printf("\n\n Invalid Number");
        goto Up;
    }

    getch();
    return 0;
}
