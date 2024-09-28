#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 7

int main()
{
  int i = 0, cnt = 0, bill[size];

  for(i = 0; i < size; i++)
  {
   printf("\nEnter bill no %d =",(i + 1));
   scanf("%d",&bill[i]);
  }
  for(i = 0; i < size; i++)
  {
   if(bill[i] % 2 != 0)
   {
     cnt++;
   }
  }
  printf("\nCount of Odd Numbers is Given Array  = %d", cnt);
  printf("\n\n=====================================\n");

  getch();
  return 0;
}
