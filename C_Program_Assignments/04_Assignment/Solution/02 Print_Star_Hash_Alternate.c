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

   for(i = 0; i < R; i++)
   {
       for(j = 0; j < C; j++)
       {
           if(j % 2 == 0)
           {
               printf(" * ");
           }
           else
           {
               printf(" # ");
           }
       }
       printf("\n");
   }

   getch();
   return 0;
}
