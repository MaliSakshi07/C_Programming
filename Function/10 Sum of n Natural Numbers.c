#include<stdio.h>
#include<conio.h>
void TotalSum(int);

int main()
{
    int No = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    TotalSum(No);

    getch();
    return 0;
}

void TotalSum(int Num)
{
    int Sum = 0, i = 0;

    for(i=1; i<=Num; i++)
    {
        Sum = Sum+i;
    }

    printf("\nTotalSum of %d = %d",Num,Sum);

    return;
}
