#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Fact = 1, Temp = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    Temp = No;

    for(Temp = 1; Temp <= No; Temp++)
    {
        Fact = Fact * Temp;
    }
    printf("\n Given Factorial %d is = %d",No,Fact);

    printf("\n Thanks!");

    getch();
    return 0;
}
