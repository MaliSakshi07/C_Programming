/* 1 2 3
   4 5 6
   7 8 9*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, j = 0, x = 3 , n = 1;

    printf("\n Pattern => \n");

    for(i=1; i<=3;i++)
    {
        for(j=1; j<=3; j++)
        {
            printf(" %d ",n);
            n++;
        }
        printf("\n");
    }
    printf("\n===========================================\n");

    getch();
    return 0;
}
