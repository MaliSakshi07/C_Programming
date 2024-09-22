#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 7

int main()
{
  int i = 0, values[i] ;

  for(i = 0; i < size; i++)
  {
    printf("\nEnter Element No %d = ",i + 1);
    scanf("%d",&values[i]);
  }
  getch();
  system("cls");

  printf("\n\nElement in Array are => \n\n");
  for(i = 0; i < size; i++)
  {
    printf("\nValue of %d Element = %d",i + 101,values[i]);
  }

  getch();
  return 0;
}
