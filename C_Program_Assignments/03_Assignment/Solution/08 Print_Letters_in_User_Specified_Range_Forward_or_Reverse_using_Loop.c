#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char Str = '\0', End = '\0';

    printf("\n Enter Starting Letter : ");
    scanf("%c",&Str);

    fflush(stdin);

    printf("\n Enter Ending Letter : ");
    scanf("%c",&End);

    if(Str < End)
    {
        while( Str <= End)
        {
            printf("\n %c",Str);
            Str++;
        }
    }
    else
    {
        while( Str >= End)
        {
            printf("\n %c",Str);
            Str--;
        }
    }

    printf("\n Thank You");

    getch();
    return 0;
}
