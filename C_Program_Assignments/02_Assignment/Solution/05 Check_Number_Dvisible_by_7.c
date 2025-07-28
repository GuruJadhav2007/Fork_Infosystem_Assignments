#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter number for check it is divisible by 7 or not : ");
    scanf("%d",&No);

    if((No % 7 )==0)
    {
        printf("\n\n %d is divisible by 7",No);
    }
    else
    {
        printf("\n\n %d are not divisible by 7 ",No);
    }

    getch();
    return 0;
}
