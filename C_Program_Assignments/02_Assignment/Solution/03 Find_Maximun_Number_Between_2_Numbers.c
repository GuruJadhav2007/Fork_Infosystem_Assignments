#include<stdio.h>
#include<conio.h>

int main()

{
   int No1 = 0, No2 = 0;

   printf("\n Enter 2 Number to check Maximum Number : ");

   printf("\n\n Enter 1st Number : ");
   scanf("%d",&No1);

   printf("\n\n Enter 2nd Number : ");
   scanf("%d",&No2);

   if(No1 > No2)
   {
       printf("\n\n %d is Maximum",No1);
   }

   else if(No2 > No1)
   {
       printf("\n\n %d is Maximum",No2);
   }

   else if(No1 == No2)
   {
       printf("\n\n %d and %d Are Equal", No1, No2);
   }

   printf("\n\n Thanks");

   getch();
   return 0;
}
