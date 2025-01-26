#include<stdio.h>
#include<conio.h>
void SumEven(int);

int main()
{
    int No = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    SumEven(No);

    getch();
    return 0;
}

void SumEven(int Num)
{
    int i = 0, Sum = 0;

    for(i=1; i<=Num; i++)
    {
      if(i%2==0)
      {
          Sum = Sum + i;
      }
    }
    printf("\nSum of n Even Numbers : %d",Sum);

    return ;

}

