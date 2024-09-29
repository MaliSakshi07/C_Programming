#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 7

int main()
{
  int Arr[size] = {}, i = 0, Sum = 0;

  for(i = 0; i < size; i++)
  {
    printf("\nThe Element of Array %d = ",(i + 1));
    scanf("%d",&Arr[i]);
  }

  for(i = 0; i < size; i++)
  {
    Sum = Sum + Arr[i];
  }
  printf("\nThe Sum of All Element of Array is = %d",Sum);

  getch();
  return 0;
}
