#include<stdio.h>
#include<conio.h>

int Power(int, int);

int main()
{
    int Base = 0, Expo = 0, Pow = 1;

    printf("\n Enter Base: ");
    scanf("%d",&Base);
    printf("\n Enter Exponent: ");
    scanf("%d",&Expo);

    if( Expo < 0)
    {
        printf("\n !Invalid Input.");
        return 0;
    }
    else
    {
        Pow = Power(Base, Expo);
        printf("\n Power (%d)^(%d) = %d.",Base, Expo, Pow);
    }

    printf("\n Thank You.");

   getch();
   return 0;
}

int Power(int B, int E)
{
    int Res = 1;

    if( E < 0)
    {
        printf("\n !Invalid Input.");
        return 0;
    }
    if(B == 0)
    {
        Res = 0;
    }
    else if(B > 1)
    {
        while(E > 0)
        {
            Res = Res * B;
            E--;
        }
    }
    return Res;
}
