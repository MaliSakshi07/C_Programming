#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    if(No >> 14 & 1)
    {
        printf("\n 15th Bit is ON");
    }
    else
    {
        printf("\n 15th Bit is OFF");
    }

    getch();
    return 0;
}
