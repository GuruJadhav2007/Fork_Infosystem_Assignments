#include<stdio.h>
#include<conio.h>

int main()
{
    int Roll = 0;
    char Name[40] = "\0", city[10] = "\0";
    float Per = 0.0;
    char Grade = '\0',Course [15] = "\0";


    printf("\n\n Student Name : ");
    gets(Name);

    fflush(stdin);

    printf("\n Roll Number : ");
    scanf("%d",&Roll);

    fflush(stdin);

    printf("\n Course : ");
    scanf("%s",&Course);

    fflush(stdin);

    printf("\n Grade : ");
    scanf("%c",&Grade);

    fflush(stdin);

    printf("\n City : ");
    scanf("%s",&city);

    system("cls");

    printf("\n\n Student Number : %s",Name);
    printf("\n Roll Number      : %d",Roll);
    printf("\n Course           : %s",Course);
    printf("\n Grade            : %c",Grade);
    printf("\n City             : %s",city);

    getch ();
    return 0;
}
