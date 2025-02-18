#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    if(No & 1)
    {
        printf("\n First Bit - ");
    }
    if(No >> 31 & 1)
    {
        printf("\nLast Bit - ");
    }

    if((No & 1) || (No >> 31 & 1))
    {
        printf("ON");
    }
    else
    {
        printf("\nFirst And Last Bits Are OFF.");
    }

    getch();
    return 0;
}
