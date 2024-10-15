#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Name[20] = "Unknown";
    char FName[20] = "Jack Fruit";

    printf("\nName string value = %s.",Name);
    printf("\nFruit Name string value = %s.\n",FName);

    getch();

    strcpy(Name,"Harry");
    printf("\nNew name string value = %s.\n",Name);

    getch();

    strcpy(Name,FName);
    printf("\nUpdated Name string value = %s.\n",Name);

    getch();
    return 0;
}
