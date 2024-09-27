#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 7

int main()
{
  int Num[size] = {}, i = 0, Min = 0;

  printf("Enter Elements for Size =>\n\n");

  for(i = 0; i < size; i++)
  {
   printf("Enter Element [%d] =",i + 1);
   scanf("%d",&Num[i]);
  }
  for(i = 0; i < size; i++)
  {
    if((i == 0) || ( Num[i] < Min))
    Min = Num[i];
  }
  printf("\nMinimum Element in Array is =%d",Min);

  printf("\nThanks..\n\nPress Any Key to Continue...");

  getch();
  return 0;
}
