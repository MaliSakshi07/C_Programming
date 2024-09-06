#include<stdio.h>
#include<conio.h>

int main()
{
    int r = 0, c = 0;

    printf("\nTable to range 5 - 15 :\n");

    for(r=1; r<=10; r++)
    {
        for(c = 5; c <= 15; c++)
        {
            printf("%-4d",r*c);
        }
        printf("\n");
    }
    printf("\n========================================\n");

    getch();
    return 0;
}
