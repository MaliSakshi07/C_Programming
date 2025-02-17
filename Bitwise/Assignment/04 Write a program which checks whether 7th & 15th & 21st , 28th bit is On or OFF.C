#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    if(No >> 6 & 1)
    {
        printf("\n 7th Bit - ");
    }
    if(No >> 14 & 1)
    {
        printf("15th Bit - ");
    }
    if(No >> 20 & 1)
    {
        printf("21st Bit - ");
    }
    if(No >>27 & 1)
    {
        printf("28th Bit - ");
    }
    if((No >> 6 & 1) || (No >> 14 & 1) || (No >> 20 & 1) || (No >> 27 & 1))
    {
        printf("ON");
    }
    else
    {
        printf("\n All Bits Are OFF");
    }

    getch();
    return 0;
}
