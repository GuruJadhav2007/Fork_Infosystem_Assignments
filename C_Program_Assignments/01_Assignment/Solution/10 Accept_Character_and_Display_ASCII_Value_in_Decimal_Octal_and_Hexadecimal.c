#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character : ");
    ch = getche();

    printf("\n Decimal      : %d.",ch);
    printf("\n Hexadecimal  : %x.",ch);
    printf("\n Octal        : %o.",ch);

    getch();
    return 0;
}
