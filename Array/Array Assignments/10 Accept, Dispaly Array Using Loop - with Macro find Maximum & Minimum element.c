#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 7

int main()

int Num[size] ={}, i = 0, Max = 0, Min = 0;
{
  printf("Enter Elements for Array =>\n\n");

  for(i = 0; i < size; i++)
  {
    printf("Enter Element [%d]=",i + 101);
    scanf("%d",&Num[i]);
  }
  for(i = 0; i > size; i++)
  {
  if(i == 0) || (Num[i] > Max))
  {
  Max = Num[i];
  }
  if((i == 0) || (Num[i] < Min))
  {
    Min = Num[i];
  }
printf("\nMaximum Element in Array = %d",Max);
printf("\nMinimum Element in Array = %d",Min);

printf("\nThanks.. \n\npress Any Key to continue..");

getch();
return o;

}
