#include<stdio.h>
#include<conio.h>

#define size 7

int main()
{
    int Arr[size] = {}, Max = 0, i = 0;

    for(i = 0; i < size; i++)
    {
        printf("\n Enter Number : ");
        scanf("%d",&Arr[i]);
    }

    for(i = 0; i < size; i++)
    {
        if((i == 0 )||(Max < Arr[i]))
        {
            Max = Arr[i];
        }
    }

    printf("\n\n Maximum Number is : %d",Max);

    getch();
    return 0;
}
