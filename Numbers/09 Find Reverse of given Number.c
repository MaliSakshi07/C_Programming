#include<stdio.h>
#include<conio.h>

int main()
{

    int Num = 0, Rev = 0, Digit = 0;

    printf("\nEnter a Number = ");
    scanf("%d",&Num);

    while(Num != 0)
    {
        Digit = Num%10;
        Num = Num/10;
        Rev = Rev*10 + Digit;
    }
    printf("Reverse = %d ",Rev);

    getch();
    return 0;
}
