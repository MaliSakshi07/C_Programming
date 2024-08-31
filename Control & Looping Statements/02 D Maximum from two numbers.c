#include<stdio.h>
#include<conio.h>

int main()
{
 int Num1=0,Num2=0;

 printf("\nEnter 2 inter number = ");
 scanf("%d%d",&Num1,&Num2);

 (Num1 == Num2)?printf("\nGiven numbers are equal"):(Num1 > Num2)?printf("\nNumber %d is maximum",Num1):printf("\nNumber %d is maximum",Num2);
 printf("Thanks!!!...");

 getch();
 return 0;
}
