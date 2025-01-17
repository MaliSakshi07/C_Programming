#include<stdio.h>
#include<conio.h>
int main()
{
    int Num = 0, Sum = 0, i = 0;

    printf("\nEnter the Number :");
    scanf("%d",&Num);

    while(Num != 0)
    {
        i = Num%10;
        Sum = Sum + i;
        Num = Num/10;
    }
    printf("Sum of digit is : %d",Sum);

    getch();
    return 0;
}
