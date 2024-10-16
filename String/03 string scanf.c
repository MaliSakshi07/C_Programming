#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Name[20] = "Unknown";
    char FName[20] = "Jack Fruit";

    printf("\nstring1 value = %s.",Name);
    printf("\nstring2 value = %s.",FName);

    printf("\nEnter your Name =");
    gets(Name);

    printf("\nEnter Favorite Fruit =");
    gets(FName);

    printf("\nName Entered is = %s.",Name);
    printf("\nFavorite Fruit Name is = %s.",FName);

    getch();
    return 0;
}
