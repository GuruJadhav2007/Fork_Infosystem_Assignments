#include<stdio.h>
#include<conio.h>
typedef long long int LLI;

LLI Power(int, int);

int main()
{
    int Base = 0, Expo = 0;

    printf("\n Enter Number For Base : ");
    scanf("%d",&Base);
    printf("\n Enter Number For Power : ");
    scanf("%d",&Expo);

    printf("\n Power of Given Number %d^%d is => %lld.", Base, Expo, Power(Base , Expo));

    getch();
    return 0;
}

LLI Power(int B, int E)
{
    int Pow = 0;

    if(E < 0)
    {
        E *= -1;
    }
    else if(B == 0)
    {
        Pow = 0;
    }
    else if(B == 1)
    {
        Pow = 1;
    }
    else
    {
        for(Pow = 1; 0 < E; E--)
        {
            Pow *= B;
        }
    }

    return Pow;
}
