#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, Arr[10] = {}, ECnt = 0;

    printf("\n Enter Values => \n");

    for(i = 0; i < 7; i++)
    {
        printf("\n Enter %d Value : ",i+1);
        scanf("%d",&Arr[i]);

        if(Arr[i] != 0 && Arr[i] % 2 == 0)
        {
            ECnt++;
        }
    }

    printf("\n\n Even Count is %d.",ECnt);

    getch();
    return 0;
}
