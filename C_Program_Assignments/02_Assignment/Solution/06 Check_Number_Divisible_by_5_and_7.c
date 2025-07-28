#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter number for check it is divisible by 5 and 7 or not : ");
    scanf("%d",&No);

    if((No%5)==0 && (No%7)==0)
    {
        printf("\n\n %d both numbers are divisible by 5 and 7",No);
    }
    else if((No % 5) == 0)
    {
        printf("\n\n %d is divisible by 5",No);
    }

    else if((No % 7) == 0)
    {
        printf("\n\n %d is divisible by 7",No);
    }

    else
    {
        printf("\n\n %d are not divisible by both numbers ",No);
    }

    getch();
    return 0;
}
