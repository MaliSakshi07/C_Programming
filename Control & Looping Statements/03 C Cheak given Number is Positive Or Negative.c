#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;
    Up :
    printf("\nEnter a Integer Number :");
    scanf("%d",&Num);

    if(Num == 0)
    {
        printf("\nGiven Number is Neutral.\nPlease Change The Number.\n");

        goto Up;
    }
    else if(Num > 0)
    {
        printf("\nGiven Number is Positive.\n");
    }
    else
    {
        printf("\nGiven Number is Negative.\n");
    }
    printf("\nThanks!!!");

    getch();
    return 0;
}
