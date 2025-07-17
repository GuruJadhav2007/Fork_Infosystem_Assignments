#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, Arr[7] = {};

    for(i = 0; i < 7; i++)
    {
        printf("\n\n Value of Element is : %d.",Arr[i]);
    }

    getch();
    system("cls");

    printf("\n Enter Values => \n");

    for(i = 0; i < 7; i++)
    {
        printf("\n Enter %d Value : ",i+1);
        scanf("%d",&Arr[i]);
    }

    getch();

    for(i = 0; i < 7; i++)
    {
        printf("\n\n New Value of Element is : %d.",Arr[i]);
    }

    getch();
    return 0;
}
