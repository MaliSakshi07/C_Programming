#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char FirstName[20];
    char LastName[20] = "";
    char MiddleName[20] = "";
    char Name[60] = "";

    printf("\nEnter Frist Name =");
    gets(FirstName);

    printf("\nEnter Middle Name =");
    gets(MiddleName);

    printf("\nEnter Last Name =");
    gets(LastName);

    printf("\nFirst Name Entered is = %s.",FirstName);
    printf("\nMiddle Name Entered is = %s.",MiddleName);
    printf("\nLast Name Entered is = %s.",LastName);

    strcat(Name,FirstName);
    strcat(Name," ");
    strcat(Name,MiddleName);
    strcat(Name," ");
    strcat(Name,LastName);

    printf("\n\n=================================\n\n");

    printf("\nFirst Name is = %s.",FirstName);
    printf("\nMiddle Name is = %s",MiddleName);
    printf("\nLast Name is = %s",LastName);
    printf("\nFullName Generated is = %s.",Name);

    printf("\n\n=================================\n\n");

    getch();
    return 0;
}
