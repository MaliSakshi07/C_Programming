#include<stdio.h>
#include<conio.h>
int Palindrome(int);

int main()
{
    int Num = 0;

    printf("\nEnter a Number :");
    scanf("%d",&Num);

    Palindrome(Num);

    getch();
    return 0;
}

int Palindrome(int No)
{
    int Sum = 0, Rem = 0, Temp =0;

    Temp = No;

    while(No > 0)
    {
        Rem = No%10;
        Sum = (Sum*10)+Rem;
        No = No/10;
    }

    return;
}
