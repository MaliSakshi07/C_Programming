/*
Write a program to print following pattern -
A
F G
K L M
P Q R S
U V W X Y
*/
#include<stdio.h>
#include<conio.h>

int main()
{
  int r = 0, c = 0, x = 0, a = '\0';

  printf("\nEnter size for pattern =");
  scanf("%d",&x);

  printf("\n============pattern=============\n");

  for(r = 1, a = 'A'; r <= x; r++)
  {
    for(c = 1; c <= x; c++,a++)
    {
      if(r >= c)
      {
       printf(" %c ",a);
      }
      else

      printf("   ");

    }
    printf("\n");

  }
  printf("\n================================\n");

  getch();
  return 0;
}
