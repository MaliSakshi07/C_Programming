#include<stdio.h>
#include<conio.h>

int main()
{
 int No=0;

 printf("\nEnter the number=");
 scanf("%d",&No);

 (No==0)?printf("\nNeutral number ,\nplease enter other number"):(No%2==0)?printf("\nEven"):printf("\nOdd");

 printf("\nThanks!!!...");

 getch();
 return 0;
}
