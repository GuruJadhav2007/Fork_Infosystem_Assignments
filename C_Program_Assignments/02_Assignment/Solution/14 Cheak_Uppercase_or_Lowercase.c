#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character = ");
    ch = getche();

    getch();

    if(ch >= 65 && ch <= 90)
    {
        printf("\n Given Letter %c is Uppercase.",ch);
    }

    else if(ch >= 'a' && ch <= 'z')
    {
         printf("\n Given Letter %c is Lowercase.",ch);
    }

    else
    {
         printf("\n Given Letter %c is not Alphabet.",ch);
    }
    getch();
    return 0;
}
