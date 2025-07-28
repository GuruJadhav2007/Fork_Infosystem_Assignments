#include<stdio.h>
#include<conio.h>

int main()

{
    int No = 0;

    printf("\n Enter Number to Check it is Even or Odd : ");
    scanf("%d",&No);

    (No == 0)?printf("\n\n %d is Neutral", No):(No % 2 == 0)?printf("\n\n %d is Even", No):printf("\n\n %d is Odd",No);

    getch();
    return 0;
}
