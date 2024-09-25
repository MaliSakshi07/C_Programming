#include<stdio.h>
#include<conio.h>
int main()
{
    int Num = 0, rem = 0, sum = 0, temp =0;

    printf("\nEnter a Number :");
    scanf("%d",&Num);

    temp = Num;

    while(Num > 0)
    {
        rem = Num%10;
        sum = (sum * 10)+rem;
        Num = Num/10;
    }
    if(temp == sum)
    {
        printf("\nGiven Number is Palindrome...");
    }
    else
    {
        printf("\nGiven Number is not Palindrome...");
    }
    getch();
    return 0;
}
