#include<stdio.h>
#include<conio.h>

int main()
{
   int i = 0, j = 0, R = 0, C = 0;

   printf("\n Enter Row Number : ");
   scanf("%d",&R);
   printf("\n Enter Column Number : ");
   scanf("%d",&C);

   printf("\n\n");

   for(i = 1; i <= R; i++)
   {
       for(j = 1; j <= C; j++)
       {
            printf(" %d ", j);
       }
       printf("\n");
   }

   getch();
   return 0;
}

