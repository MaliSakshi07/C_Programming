#include<stdio.h>
#include<conio.h>
int main()

{
int Num1=0,Num2=0;

Up:

  printf("\nEnter 2 Integer number=");
  scanf("%d%d",&Num1,&Num2);

 if(Num1 == Num2)
 {
 printf("\n Both given numbers are equal ,\n please enter different number to compare,\n");
 goto Up;
 }
 if(Num1 > Num2)
 {
   printf("\nNumber %d is maximum",Num1);
 }
 else
 {
   printf("\nNumber %d is maximum",Num2);
 }
printf("\nThanks!!!..");

getch();
return 0;

}
