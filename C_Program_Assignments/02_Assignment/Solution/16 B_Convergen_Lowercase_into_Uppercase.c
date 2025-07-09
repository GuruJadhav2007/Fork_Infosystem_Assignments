#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character : ");
    scanf("%c",&ch);

    if( ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("\n Given Letter After Convert To Uppercase : %c",ch);
    }
    else if ( ch >= 'A' && ch <= 'Z')
    {
        printf("\n Given Letter %c is Already Uppercase.",ch);
    }
    else
    {
        printf("\n Given Letter %c is Not Lowercase ( Hence It Is Not Convert)",ch);
    }

    printf("\n\n Thanks ");

    getch();
    return 0;
}

