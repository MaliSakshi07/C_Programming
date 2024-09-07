#include<stdio.h>
#include<conio.h>

int main()
{
    int n = 0, Cnt = 1, Sum = 0;

    printf("\nEnter Number :");
    scanf("%d",&n);

    while(Cnt <= n)
    {
        Sum += Cnt;
        Cnt += 1;
    }
    printf("Sum of Number 1 To %d : %d",n,Sum);

    getch();
    return 0;
}
