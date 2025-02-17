#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    if(No >> 6 & 1)
    {
        printf(" \n7th Bit - ");
    }
    if(No >> 7 & 1)
    {
        printf("8th Bit - ");
    }
    if(No >> 8 & 1)
    {
        printf("9th Bit - ");
    }

    if((No >> 6 & 1) || (No >> 7 & 1) || (No >> 8 & 1))
    {
        printf("ON");
    }
    else
    {
      printf("\n All Bits are OFF");
    }

    getch();
    return 0;
}
