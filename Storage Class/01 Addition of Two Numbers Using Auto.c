#include<stdio.h>
#include<conio.h>
int Add(int,int);

int main()
{
    int No1 = 0, No2 = 0, Res = 0;

    printf("\nEnter 1st Number :");
    scanf("%d",&No1);

    printf("\nEnter 2nd Number :");
    scanf("%d",&No2);

    Res = Add(No1,No2);
    printf("\nAddition = %d",Res);

    getch();
    return 0;
}

int Add(int Num1, int Num2)
{
        auto int Res;

        Res = Num1 + Num2;

        return Res;
}
