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

    getch();

    strcat(Name,FirstName);
    strcat(Name," ");
    strcat(Name,LastName);

    printf("\nFirst Name is = %s.",FirstName);
    printf("\nLast Name is = %s",LastName);
    printf("\nFullName Generated is = %s.",Name);

    getch();

    return 0;
}
