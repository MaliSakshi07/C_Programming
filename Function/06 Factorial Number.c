#include<stdio.h>
#include<conio.h>

long long int Factorial(int);

int main()
{
    int No = 0;
    long long int Ans = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    Ans = Factorial(No);

    printf("Factorial of %d is : %d",No,Ans);

    getch();
    return 0;
}

long long int Factorial(int Num)
{
    long long int Fact = 0;

    for(Fact = 1; Num > 1; Num--)
    {
        Fact = Fact * Num;
    }
    return Fact;
}
