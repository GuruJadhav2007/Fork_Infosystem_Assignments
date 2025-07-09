#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0,i = 1;

    printf("\n Enter 2 numbers ");

    printf("\n Enter 1st number : ");
    scanf("%d",&No1);
    printf("\n Enter 2nd number : ");
    scanf("%d",&No2);

    if(No2 < 0)
    {
        printf("\n Invalid Number");
    }
    while(No2 > 0)
    {
        printf("\n %d. %d",i++,No1);
        No2--;
    }

    getch();
    return 0;
}
