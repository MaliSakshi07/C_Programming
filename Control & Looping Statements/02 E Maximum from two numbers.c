#include<stdio.h>
#include<conio.h>

int main()
{
 int Num1=0,Num2=0;

 printf("\nEnter 2 integer number");
 scanf("%d%d",&Num1,&Num2);

 (Num1 == Num2)?printf("\nGiven numbers are equal,\nplease enter other number"):(Num1 > Num2)?printf("\nNumber %d is Maximum",Num1):printf("\nNumber %d is Maximum",Num2);

 printf("\nThanks!!!...");
 getch();
 return 0;

}
