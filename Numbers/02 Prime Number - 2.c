#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, i = 0;

    printf("Enter a Positive Number :");
    scanf("%d",&No);

    for(i = 2; i < No/2; i++)
    {
        if(No % i== 0)
        {
            break;
        }
    }

    printf("\n Iteration = %d",i);

    if(No/2 == i)
    {
        printf("\n Given %d is Prime Number.",No);
    }
    else
    {
        printf("\n Given %d is Not Prime Number.",No);
    }

    getch();
    return 0;
}
