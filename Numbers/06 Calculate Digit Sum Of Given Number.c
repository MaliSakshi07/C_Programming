#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0, m = 0, sum = 0;

    printf("\nEnter a Number =");
    scanf("%d",&num);

    while(num > 0)
    {
        m = num%10;
        sum += m;
        num = num/10;
    }
    printf("\nSum = %d",sum);
    getch();
    return 0;
}
