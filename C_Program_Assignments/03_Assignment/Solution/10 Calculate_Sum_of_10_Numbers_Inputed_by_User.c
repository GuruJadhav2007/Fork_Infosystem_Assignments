#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Sum = 0, i = 0;

    for(i = 1; i <= 10; i++)
    {
        printf("\n\n Enter Number : ");
        scanf("%d",&No);

        Sum += No;
    }

    printf("\n Sum of All Numbers is : %d", Sum);

    getch();
    return 0;
}
