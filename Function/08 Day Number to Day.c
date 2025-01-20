#include<stdio.h>
#include<conio.h>

void WeekDay(int);

int main()
{
     int D = 0;

    printf("\nEnter Day Number(1-7) To View Day Text :");
    scanf("%d",&D);

    WeekDay(D);

    printf("\nThanks!!!");
    getch();
    return 0;
}

void WeekDay(int Day)
{

    if(Day == 1)
    {
        printf("\nMonday");
    }
    else if(Day == 2)
    {
        printf("\nTuesday");
    }
     else if(Day == 3)
    {
        printf("\nWednesday");
    }
     else if(Day == 4)
    {
        printf("\nThursday");
    }
     else if(Day == 5)
    {
        printf("\nFriday");
    }
     else if(Day == 6)
    {
        printf("\nSaturday");
    }
     else if(Day == 7)
    {
        printf("\nSunday");
    }
    else
    {
       printf("\nInvalid Input");
    }
    return;
}
