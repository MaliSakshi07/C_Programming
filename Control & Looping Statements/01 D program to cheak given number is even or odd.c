#include<stdio.h>
#include<conio.h>
int main()
{
 int No=0;

 printf("\nEnter the number=");
 scanf("%d",&No);

 (No==0)?printf("Neutral"):No%2==0?printf("Even"):printf("Odd");

 printf("\nThanks!!!..");

 getch();
 return 0;
}
