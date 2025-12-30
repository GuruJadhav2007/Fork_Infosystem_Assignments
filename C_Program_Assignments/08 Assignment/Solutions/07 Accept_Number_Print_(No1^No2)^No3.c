#include<stdio.h>
#include<conio.h>
typedef long long int LLI;

LLI Power(int, int);

int main()
{
    int Base = 0, Expo1 = 0, Expo2 = 0;
    LLI Res = 0;

    printf("\n Enter Base Number : ");
    scanf("%d",&Base);
    printf("\n Enter 1st Power Number : ");
    scanf("%d",&Expo1);
    printf("\n Enter 2nd Power Number : ");
    scanf("%d",&Expo2);

    Res = Power(Power(Base, Expo1), Expo2);

    printf("\n\n Power of Given Number (%d^%d)^%d = %lld.",Base, Expo1, Expo2, Res);

    getch();
    return 0;
}

LLI Power(int B, int E)
{
    LLI Pow = 1;

    if(E < 0)
    {
        E *= -1;
    }

    if(B == 1)
    {
        Pow = 1;
    }
    else if(B == 0)
    {
        Pow = 0;
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
