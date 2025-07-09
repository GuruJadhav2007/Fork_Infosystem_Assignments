#include<stdio.h>
#include<conio.h>

int main()

{
    char  Opr= '\0';
    int No1 = 0, No2 = 0;

    printf("\n Enter Arithmetic Operator ( +,-,*,/ ): ");
    Opr = getche();

    switch(Opr)
    {

        case '+':
                    printf("\n\n Enter 1st Number : ");
                    scanf("%d",&No1);
                    printf("\n\n Enter 2nd Number : ");
                    scanf("%d",&No2);

                    getch();

                    printf("\n\n Addition of %d and %d is => %d ", No1, No2, (No1 + No2));
                    break;

        case '-':
                    printf("\n\n Enter 1st Number : ");
                    scanf("%d",&No1);
                    printf("\n\n Enter 2nd Number : ");
                    scanf("%d",&No2);

                    getch();

                    printf("\n\n Subtraction of %d and %d is => %d ", No1, No2, (No1 - No2));
                    break;

         case '*':
                    printf("\n\n Enter 1st Number : ");
                    scanf("%d",&No1);
                    printf("\n\n Enter 2nd Number : ");
                    scanf("%d",&No2);

                    getch();

                    printf("\n\n Multiplication of %d and %d is => %d ", No1, No2, (No1 * No2));
                    break;

         case '/':
                    printf("\n\n Enter 1st Number : ");
                    scanf("%d",&No1);
                    printf("\n\n Enter 2nd Number : ");
                    scanf("%d",&No2);

                    getch();

                    printf("\n\n Division of %d and %d is => %d ", No1, No2, (No1 / No2));
                    break;
         default :

                    printf("\n\n It is not Arithmetic Symbol.");
    }
}
