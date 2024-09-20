#include<stdio.h>
#include<conio.h>

int main()
{
  int r = 0, c =0, x =0, i = 0;

  printf("\nEnter size for pattern =");
  scanf("%d",&x);

  printf("\n=========== Pattern =============\n");

  for(r = 1, i = 15; r <= x; r++)
  {
    for(c = 1; c <= x; c++)
    {
      if(r >= c)
      {
      printf(" %d ",i);
      i = i + 5;
      }
      else

      printf("   ");
    }
    printf("\n");
  }
  printf("\n===================================\n");

  getch();
  return 0;
}
