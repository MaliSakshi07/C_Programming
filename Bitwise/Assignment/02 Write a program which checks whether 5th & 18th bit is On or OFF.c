#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    if((No >> 4 & 1) && (No >> 17 & 1))
    {
        printf("\n Both 5th and 18th Bit is ON.");
    }
    else if(No >> 4 & 1)
    {
        printf("\n 5th Bit is ON , 18th Bit is OFF.");
    }
    else if(No >> 17 & 1)
    {
        printf("\n 18th Bit is ON , 5th Bit is OFF.");
    }
    else
    {
        printf("\n Both 5th and 18th Bit is OFF.");
    }

    getch();
    return 0;
}
