#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, i = 0;

    printf("\n Enter a Positive Number :");
    scanf("%d",&No);

    if(No <= 0)
    {
        goto down;
    }
    else if(No == 2||No == 3 || No == 5 || No == 7)
    {
        printf("\n Given %d is Prime Number.",No);
    }
    else
    {
        for(i = 2; i < No/4; i++)
        {
            if(No % i == 0)
            {
                break;
            }
        }

        printf("\nIteration = %d",i);

        if(No/4 == i)
        {
            printf("\nGiven %d is Prime Number.",No);
        }
        else
        {
            printf("\nGiven %d is Not Prime Number.",No);
        }
    }
    down:

        getch();
        return 0;
}
