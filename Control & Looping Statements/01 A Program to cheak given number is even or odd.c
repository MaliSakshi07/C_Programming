#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("Enter a Number :");
    scanf("%d",&No);

    if(No%2 == 0)
    {
        printf("\nGiven Number is Even.");
    }
    else
    {
        printf("\nGiven Number is Odd.");
    }
    getch();
    return 0;
}
