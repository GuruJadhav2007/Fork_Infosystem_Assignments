#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7

int main()
{
    int Arr[Size] = {}, i = 0, Cnt = 0;

    printf("\n\n Enter 7 Numbers : ");

    for(i = 0; i < Size; i++ )
    {
        printf("\n Enter Number %d : ",i+1);
        scanf("%d",&Arr[i]);

        Cnt++;

    }

    printf("\n\n Count of Elements is : %d.",Cnt);

    getch();
    return 0;
}
