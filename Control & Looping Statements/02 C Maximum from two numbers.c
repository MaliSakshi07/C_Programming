#include<stdio.h>
#include<conio.h>

int main()
{
 int Num1=0,Num2=0;

 printf("\n Enter 2 Integers Number = ");
 scanf("%d%d",&Num1,&Num2);

 if(Num1 == Num2)
 {
   printf("\nGiven numbers are equal");
 }
 else if(Num1 > Num2)
 {
  printf("\nNumber %d is maximum",Num1);
 }
 else
 {
  printf("\nNumber %d is maximum",Num2);
 }
 printf("\nThanks!!!...");

 getch();
 return 0;
}
