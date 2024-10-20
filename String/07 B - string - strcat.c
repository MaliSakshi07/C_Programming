#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char FirstName[20];
    char LastName[20] = "";
    char Name[40] = "";

    printf("\nEnter Frist Name =");
    gets(FirstName);

    printf("\nEnter Last Name =");
    gets(LastName);

    printf("\nFirst Name Entered is = %s.",FirstName);
    printf("\nLast Name Entered is = %s.",LastName);

    strcat(strcat(strcat(Name,FirstName)," "),LastName);

    printf("\n\n=================================\n\n");

    printf("\n Name Generated is = %s.",Name);
    getch();

    printf("\n\n=================================\n\n");

    printf("\nFirst Name Entered is = %s.",FirstName);
    printf("\nLast Name Entered is = %s",LastName);

    getch();
    return 0;
}
