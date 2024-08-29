#include<stdio.h>
#include<conio.h>

int main()
{
 int No=0;
 Up:
 printf("Enter the number=");
 scanf("%d",&No);

 if(No==0)
 {
  printf("\ngiven number is neutral,\nplease enter the other number\n");
  goto Up;
 }
 if(No%2==0)
 {
  printf("\nGiven number is even");
 }
 else
 {
  printf("\nGiven number is odd");
 }
 printf("\nThanks!!!...");

 getch();
 return 0;

}
