#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0, O_Num = 0, Rem = 0, Res = 0;                        //o=original  Rem = Remainder Res = Result

    printf("\n Enter a Three Digit Number :");
    scanf("%d",&Num);
    O_Num = Num;

    while(O_Num != 0)
    {
        Rem = O_Num % 10;
        Res += Rem * Rem * Rem;
        O_Num /= 10;
    }
    if(Res == Num)
    {
        printf("\n%d is Armstrong Number.",Num);
    }
    else
    {
        printf("\n%d is Not Armstrong Number.",Num);

    }
}
