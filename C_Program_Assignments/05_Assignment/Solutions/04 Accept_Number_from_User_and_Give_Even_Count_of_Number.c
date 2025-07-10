#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, ECnt = 0, Temp = 0, Dig = 0;

    printf("\n\n Enter Number : ");
    scanf("%d",&No);

    Temp = No;

    while(Temp > 0)
    {
        Dig = Temp % 10;

        if(Dig != 0 && Dig % 2 == 0)
        {
            ECnt++;
        }

        Temp = Temp / 10;
    }

    printf("\n\n Even Count is %d.",ECnt);

    getch();
    return 0;
}
