#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int Len = 0;
    char Name[20] = "Unknown";

    printf("\nString value = %s.",Name);

    printf("\nEnter Your Name =");
    gets(Name);

    Len = strlen(Name);

    printf("\nLenght of given string is = %d.",Len);

    getch();
    return 0;
}
