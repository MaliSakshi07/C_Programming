#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, i = 0, sum = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    for(i = 1; i <= No; i++)
    {
        sum =sum+i;
    }
    printf("Sum = %d",sum);

    getch();
    return 0;
}
