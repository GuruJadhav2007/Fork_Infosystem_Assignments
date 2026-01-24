#include<stdio.h>
#include<conio.h>

int main()
{
    int Base = 0, Expo = 0, Temp = 0, Res = 1;

    printf("\n Enter Base: ");
    scanf("%d",&Base);
    printf("\n Enter Exponent: ");
    scanf("%d",&Expo);

    if( Expo < 0)
    {
        printf("\n !Invalid Input.");
        return 0;
    }
    if(Base == 0)
    {
        Res = 0;
    }
    else if(Base > 1)
    {
        Temp = Expo;

        while(Temp > 0)
        {
            Res = Res * Base;
            Temp--;
        }
    }

    printf("\n Power (%d)^(%d) = %d.",Base, Expo, Res);

    return 0;

}
