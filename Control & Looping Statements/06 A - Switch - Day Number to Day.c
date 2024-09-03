#include<stdio.h>
#include<conio.h>

int main()
{
    char Day = 0;

    printf("\nEnter Day Number(1-7) To View Day Text :");
    scanf("%c",&Day);

    switch(Day)
    {
        case '1':
            printf("\nMonday");
            break;

         case '2':
            printf("\nTuesday");
            break;

         case '3':
            printf("\nWednesday");
            break;

         case '4':
            printf("\nThursday");
            break;

         case '5':
            printf("\nFriday");
            break;

         case '6':
            printf("\nSaturday");
            break;

         case '7':
            printf("\nSunday");
            break;

         default :
            printf("\nInvalid Input");
    }
    printf("\nThanks!!!");

    getch();
    return 0;
}
