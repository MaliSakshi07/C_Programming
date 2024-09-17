#include<stdio.h>
#include<conio.h>

int main()
{
  int r = 0, c = 0, x = 0, a = '\0';

  printf("\nEnter Size for pattern =\n");
  scanf("%d",&x);

  printf("\n==========Pattern=============\n");

  for(r = 1, a = 'A'; r <= x; r++)
  {
    for(c = 1; c <= x; c++)
    {
     if(r >= c)
    {
     printf(" %c ",a);
     a++;
     }
     else

     printf("   ");
    }
    printf("\n");
    }
  printf("\n===========Thanks================\n");

  getch();
  return 0;
}
