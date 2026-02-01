#include<stdio.h>
#include<conio.h>

int main()
{
   int i = 0, j = 0, R = 0, C = 0, K = 1;

   printf("\n Enter Row Number : ");
   scanf("%d",&R);
   printf("\n Enter Column Number : ");
   scanf("%d",&C);

   printf("\n\n");

   for(i = 1; i <= R; i++)
   {
       for(j = 1; j <= C; j++)
       {
            printf(" %2d ", K);
            K++;
       }
       printf("\n");
   }

   getch();
   return 0;
}


