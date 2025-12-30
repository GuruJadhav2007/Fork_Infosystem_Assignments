#include<stdio.h>
#include<conio.h>

#define size 7

int main()
{
    int Arr[size] = {}, Min = 0, Max = 0, i = 0;

    for(i = 0; i < size; i++)
    {
        printf("\n\n Enter Number : ");
        scanf("%d",&Arr[i]);
    }

    for(i = 0; i < size; i++)
    {
        if((i == 0)||(Max < Arr[i]))
        {
            Max = Arr[i];
        }

        if((i == 0)||(Min > Arr[i]))
        {
            Min = Arr[i];
        }

    }

    printf("\n\n Maximum Number is %d",Max);
    printf("\n\n Minimum Number is %d",Min);

    getch();
    return 0;

}
