#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, R = 0 , C = 0;
    char Ch1 = 'A', Ch2 = 'a';

    printf("\n Enter Row : ");
    scanf("%d",&R);
    printf("\n Enter Column : ");
    scanf("%d",&C);

    printf("\n\n");

    for(i = 1; i <= R; i++)
    {
        for(j = 1; j <= C; j++)
        {
            if(i % 2 == 1)
            {
               printf(" %c", Ch1);
               Ch1++;
            }
            else
            {
               printf(" %c", Ch2);
               Ch2++;
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}
