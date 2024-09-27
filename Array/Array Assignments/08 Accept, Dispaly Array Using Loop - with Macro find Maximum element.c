#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 7
 int main()
 {
  int Num[size]={}, i = 0, Max = 0;

  printf("Enter elements for Array =>\n\n");

  for(i = 0; i < size; i++)
  {
    printf("Enter Element [%d] =",i + 101);
    scanf("%d",&Num[i]);
  }

    for(i = 0; i < size; i++)
    {
    if((i == 0) || (Num[i] > Max))
    {
        Max = Num[i];
    }
  }

  printf("\n\nMaximum Element in Array is = %d",Max);

  printf("\nThanks..\nPress Any Key to Continue..");

getch();
return 0;

 }
