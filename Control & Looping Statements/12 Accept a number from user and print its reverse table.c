#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, No = 0;

    printf("\nEnter a Number to Reverce Table :");
    scanf("%d",&No);

    for(i = 10; i >= 1; i--)
    {
        printf("\t%d\n",(i*No));
    }
    printf("\nThanks!!!");

    getch();
    return 0;
}
