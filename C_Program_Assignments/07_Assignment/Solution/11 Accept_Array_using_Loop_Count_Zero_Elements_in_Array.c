#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7] = {}, i = 0, zCnt = 0;

    printf("\n\n Enter Number : ");

    for(i = 0; i < 7; i++ )
    {
        printf("\n\n Enter number %d is : ", i+1);
        scanf("%d",&Arr[i]);

        if(Arr[i] == 0 )
        {
            zCnt++;
        }
    }

    printf("\n\n ==============================================================================\n\n");

    printf("\n\n Zero in Given Array is %d.",zCnt);

    getch();
    return 0;
}
