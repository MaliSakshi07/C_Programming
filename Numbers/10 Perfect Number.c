#include<stdio.h>
#include<conio.h>
int main()
{
    int Num = 0, Sum = 0, i = 0;

    printf("\nEnter a Number :");
    scanf("%d",&Num);

    for(i=1; i<Num; i++)
    {
        if(Num%i == 0)
        {
            Sum = Sum + i;
        }
    }
    if(Num == Sum)
    {
        printf("%d is Perfect Number.",Num);
    }
    else
    {
        printf("%d is Not Perfect Number.",Num);
    }

    getch();
    return 0;
}
