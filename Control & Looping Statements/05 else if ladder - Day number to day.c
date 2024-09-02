#include<stdio.h>
#include<conio.h>

int main()
{
    int day = 0;

    printf("\nEnter Day Number(1-7) to View Day Text :");
    scanf("%d",&day);

    if(day == 1)
    {
        printf("\nMonday");
    }
    else if(day == 2)
    {
        printf("\nTuesday");
    }
    else if(day == 3)
    {
        printf("\nWednesday");
    }
    else if(day == 4)
    {
        printf("\nThursday");
    }
    else if(day == 5)
    {
        printf("\nFriday");
    }
    else if(day == 6)
    {
        printf("\nSaturday");
    }
    else if(day == 7)
    {
        printf("\nSunday");
    }
    else
    {
        printf("\nInvalid Input");
    }

    getch();
    return 0;
}
