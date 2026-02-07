#include<stdio.h>
#include<conio.h>

void Square();
void Cube();

int main()
{
    int No = 0;

    Up:

    printf("\n 1. Enter Number for Square. ");
    printf("\n\n 2. Enter Number for Cube. \n");

    printf("\n =============================================== \n");

    printf("\n\n Enter Number : ");
    scanf("%d",&No);

    system("cls");

    if(No == 1)
    {
        Square();
    }
    else if(No == 2)
    {
        Cube();
    }
    else
    {
        printf("\n Invalid Number, Select Given Option 1 or 2. \n");
        printf("\n =============================================== \n");
        goto Up;
    }


    getch();
    return 0;
}

void Square()
{
    int Num = 0;

    printf("\n\n Enter Number : ");
    scanf("%d",&Num);

    if(Num < 0)
    {
        Num *= -1;
    }

    printf("\n Square of Given Number %d is : %d.",Num ,(Num * Num));

    return 0;
}

void Cube()
{
    int Num = 0, Cub = 0;

    printf("\n\n Enter Number : ");
    scanf("%d",&Num);

    if(Num < 0)
    {
        Num *= -1;
    }

    printf("\n Cube of Given Number %d is : %d.",Num ,(Num * Num * Num));

    return 0;
}

