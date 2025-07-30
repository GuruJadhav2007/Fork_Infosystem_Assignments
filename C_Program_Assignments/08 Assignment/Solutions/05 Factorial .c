#include<stdio.h>
#include<conio.h>

typedef long long int LLI;

LLI Factorial(int);

int main()
{
    int No = 0;

    Up:

    printf("\n Enter Number : ");
    scanf("%d",&No);

    if(No <= 0)
    {
        printf("\n Invalid Number, Enter Positive Number");
        goto Up;
    }

    printf("\n Factorial of Given Number %d is : %lld.", No, Factorial(No));

    getch();
    return 0;
}

LLI Factorial(int N)
{
    long long int Fact = 1;

    while(1 < N)
    {
        Fact *= N;
        N--;
    }

    return Fact;
}
