#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter Number : ");
    scanf("%d",&No);

    while(No > 0)
    {
        printf("\n * ",No);
        No--;
    }

    getch();
    return 0;

}
