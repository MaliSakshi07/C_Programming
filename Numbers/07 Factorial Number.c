#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, fact = 1, No = 0;

    printf("\nEnter a Number =");
    scanf("%d",&No);

    for(i=1; i <= No; i++)
    {
        fact = fact*i;
    }
    printf("\nFactorial Of %d is = %d",No,fact);

    getch();
    return 0;
}
