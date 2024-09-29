#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 7

int main()
{
  int Num[size] = {}, i = 0, Max = 0, Sec_Max = 0, Flag =0;

  printf("\nEnter Array Elements =>\n\n");

  for(i = 0; i < size; i++)
  {
    printf("\nEnter Element %d = ",i + 101);
    scanf("%d",&Num[i]);
  }
  for(i = 0; i < size; i++)
  {
    if((i == 0) || (Num[i] > Max))
    {
      Max = Num[i];
    }
  }
  for(i = 0; i < size; i++)
  {
    if(Num[i] == Max)
    {
      continue;
    }
    if((Flag == 0) || (Num[i] > Sec_Max))
    {
      Sec_Max = Num[i];
      Flag = 1;
    }
  }

  printf("\n\nMaximum Element in Array = %d",Max);
  printf("\n\nSecond Maximum Element in Array = %d",Sec_Max);

  printf("\n\nThanks...\n\nPress any key to continue...");

  getch();
  return 0;
}
