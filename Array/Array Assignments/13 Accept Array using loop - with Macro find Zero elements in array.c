#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 7

int main()
{
  int i = 0, zcnt = 0, bill[size] = {0};

  for(i = 0; i < size; i++)
  {
   printf("\nEnter bill no %d =",(i + 1));
   scanf("%d",&bill[i]);
  }
  for(i = 0; i < size; i++)
  {
    if(bill[i] == 0)
    {
      zcnt++;
    }
  }
  printf("\nCount of Zero in given Array = %d", zcnt);
  printf("\n\n===================================\n");

  getch();
  return 0;
}
