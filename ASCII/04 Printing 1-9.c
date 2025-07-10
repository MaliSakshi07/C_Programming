#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0;

    printf("Printing Numbers (0-9) : \n\n");

    for(i=48; i <= 57; i++)
    {
        printf(" %c ",i);
    }

    getch();
    return 0;
}
