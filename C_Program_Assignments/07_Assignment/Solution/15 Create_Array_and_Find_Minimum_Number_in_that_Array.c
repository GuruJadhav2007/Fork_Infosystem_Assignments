#include<stdio.h>
#include<conio.h>

#define size 7

int main()
{
    int Arr[size] = {}, i = 0, Min = 0;

    for(i = 0; i < size; i++)
    {
        printf("\n\n Enter Number : ");
        scanf("%d",&Arr[i]);

        if((i == 0) || (Min >Arr[i]))
        {
            Min = Arr[i];
        }
    }

    printf("\n\n Minimum Number is : %d",Min);

    getch();
    return 0;
}
