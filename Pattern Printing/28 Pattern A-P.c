/* Pattern =>
A B C D
E F G H
I J K L
M N O P*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,x=4, n;

    printf("\nPattern => \n");

    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
            printf(" %c ",n+65);
            n++;
        }
        printf("\n");
    }

    getch();
    return 0;
}
