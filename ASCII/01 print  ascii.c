#include<stdio.h>
#include<conio.h>

int main()
{
  int i = 0;

    printf("\n ASCII table =\n");

    for(i = 1; i <= 128; i++)
    {
       printf("\n%d = %c",i,i);
    }

  printf("\n\nThanks..");
  getch();
  return 0;
}
