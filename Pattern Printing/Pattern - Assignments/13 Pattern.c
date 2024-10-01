 /*  A  B  C  D  E
     A           E
     A           E
     A           E
     A  B  C  D  E*/

#include<stdio.h>
#include<conio.h>

int main()
{
  int r = 0, c = 0, x = 0;
  char i = '\0';

  printf("\nEnter Size For Pattern => ");
  scanf("%d",&x);

  printf("\n========= pattern =========\n");

  for(r = 1; r <= x; r++)
  {
    for(c = 1,i ='A'; c <=x; c++,i++)
    {
     if(r == 1 || c == 1 || r == x || c == x)
     {
       printf(" %c ",i);
     }
     else
     printf("   ");
    }
    printf("\n");
  }
  printf("\n=========================\n");

  getch();
  return 0;
}
