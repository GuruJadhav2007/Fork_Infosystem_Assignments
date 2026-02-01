#include<stdio.h>
#include<conio.h>

int main()
{
   int i = 0, j = 0, R = 0, C = 0, K = 0;

   printf("\n Enter Row Number : ");
   scanf("%d",&R);
   printf("\n Enter Column Number : ");
   scanf("%d",&C);

   printf("\n\n");

   for(i = 1; i < R; i++)
   {
       for(j = 1, K = j; j < C; j++, K--)
       {
            printf(" %d ", K);
       }
       printf("\n");
   }

   getch();
   return 0;
}

