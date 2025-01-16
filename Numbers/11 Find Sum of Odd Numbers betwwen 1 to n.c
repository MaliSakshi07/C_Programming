#include<stdio.h>
#include<conio.h>
int main()
{
    int Num = 0, Sum = 0, i = 0;

    printf("\nEnter a Number :");
    scanf("%d",&Num);

    for(i = 1; i<= Num; i++)
    {
        if(i%2 == 1)
        {
            Sum = Sum + i;
        }
    }
    printf("Sum of Odd Number : %d",Sum);

    getch();
    return 0;
}
