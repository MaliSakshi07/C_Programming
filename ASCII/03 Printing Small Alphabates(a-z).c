#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0;

    printf("\nPrinting Small Alphabates (a - z) :\n\n");

    for(i=97; i <= 122;i++)
    {
        printf(" %c ",i);
    }

    getch();
    return 0;
}
