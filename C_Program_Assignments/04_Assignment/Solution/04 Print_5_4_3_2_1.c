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
   {    K = j;
       for(j = 1; j < C; j++)
       {
           printf(" %d ", K);
           K--;
       }
       printf("\n");
   }

   getch();
   return 0;
}

