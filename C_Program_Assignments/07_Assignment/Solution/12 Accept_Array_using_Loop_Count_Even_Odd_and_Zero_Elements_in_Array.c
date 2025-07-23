#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7] = {}, i = 0, eCnt = 0, oCnt = 0, zCnt = 0;

    printf("\n\n Enter Number : ");

    for(Arr[i] = 0; i < 7; i++)
    {
        printf("\n\n Enter %d Number : ", i+1);
        scanf("%d",&Arr[i]);

        if(Arr[i] == 0)
        {
            zCnt++;
        }

        else if(Arr[i] % 2 == 0)
        {
            eCnt++;
        }

        else
        {
            oCnt++;
        }
    }

        printf("\n Count of Zero is %d.", zCnt);
        printf("\n Count of Even is %d.", eCnt);
        printf("\n Count of Odd is %d.", oCnt);

    getch();
    return 0;
}
