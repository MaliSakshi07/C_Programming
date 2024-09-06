#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, i =0;

    printf("\nEnter a Number to Print It's Reverse Table :");
    scanf("%d",&No);

    i = 10;
    while(i >= 1)
    {
        printf("\n%d",(i*No));
        i--;
    }
    printf("\n======================================\n");

    getch();
    return 0;
}
