#include<stdio.h>
#include<conio.h>

int main()

{
    int No = 0;

    printf("\n Enter Number Between 1-12 : ");
    scanf("%d",&No);

    if(No == 1)
    {
        printf("\n\n Jan");
    }

    else if (No == 2)
    {
        printf("\n\n Feb");
    }

     else if (No == 3)
    {
        printf("\n\n March");
    }

    else if (No == 4)
    {
        printf("\n\n April");
    }
     else if (No == 5)
    {
        printf("\n\n May");
    }

     else if (No == 6)
    {
        printf("\n\n June");
    }

     else if (No == 7)
    {
        printf("\n\n July");
    }

     else if (No == 8)
    {
        printf("\n\n Aug");
    }

     else if (No == 9)
    {
        printf("\n\n Sep");
    }

    else if (No == 10)
    {
        printf("\n\n Oct");
    }
     else if (No == 11)
    {
        printf("\n\n Nov");
    }

     else if (No == 12)
    {
        printf("\n\n Dec");
    }

    else
    {
        printf("\n\n Sorry! Invalid Number.");
    }

    printf("\n\n Thank You.");

    getch();
    return 0;
}

