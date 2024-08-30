#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0;

    printf("\nEnter The 1st Number :");
    scanf("%d",&No1);

    printf("\nEnter The 2nd Number :");
    scanf("%d",&No2);

    if(No1 > No2)
    {
        printf("\n Number %d is Maximum.",No1);
    }
    else
    {
        printf("\nNumber %d is Maximum.",No2);
    }
    printf("\nThanks!!!");

    getch();
    return 0;
}
