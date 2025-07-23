#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 7

int main()
{
    int i = 0, E_Sum = 0, Bill[size] = {};

    printf("\n\n Enter Numbers Greater than Zero : ");

    for(i = 0; i < size; i++)
    {
        up:

        printf("\n\n Enter %d Number : ", i+1);
        scanf("%d",&Bill[i]);

        if(Bill[i] <= 0)
        {
            printf("\n\n ! Invalid Number ");

            goto up;
        }

        E_Sum += Bill[i];
    }

    printf("\n\n Sum of All Elements : %d ",E_Sum);

    getch();
    return 0;
}
