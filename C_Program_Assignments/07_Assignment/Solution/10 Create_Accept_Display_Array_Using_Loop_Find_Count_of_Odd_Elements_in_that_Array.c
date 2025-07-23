#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7] = {}, i = 0, oCnt = 0;

    printf("\n\n Enter Number : ");

    for(i = 0; i < 7; i++)
    {
        printf("\n\n Enter %d value : ",i+1);
        scanf("%d",&Arr[i]);

        if(Arr[i] !=0 && Arr[i] % 2 == 1)
        {
            oCnt++;
        }
    }

    printf("\n\n Odd Number in Giver Number is %d ",oCnt);

    getch();
    return 0;
}
