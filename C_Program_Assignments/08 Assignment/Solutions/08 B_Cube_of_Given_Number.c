#include<stdio.h>
#include<conio.h>

int Cube(int);

int main()
{
    int No = 0, Res = 0;

    printf("\n\n Enter Number : ");
    scanf("%d",&No);

    system("cls");

    if(No == 0)
    {
        Res = 0;
    }
    else if(No == 1)
    {
        Res = 1;
    }
    else
    {
        Res = Cube(No);
    }

    printf("\n\n Cube of Given Number %d is => %d", No ,Res);

    getch();
    return 0;
}

int Cube(int Num)
{
    int Cub = 0;

    if(Num < 0)
    {
        Num *= -1;
    }

    Cub = Num * Num * Num;

    return Cub;
}
