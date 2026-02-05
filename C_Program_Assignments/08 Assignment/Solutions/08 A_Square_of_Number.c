#include<stdio.h>
#include<conio.h>

int Square(int);

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
        Res = Square(No);
    }

    printf("\n\n Square of Given Number %d is : %d", No ,Res);

    getch();
    return 0;
}

int Square(int N)
{
    int Sqr = 0;

    if(N < 0)
    {
        N *= -1;
    }

    Sqr = N * N;

    return Sqr;
}
