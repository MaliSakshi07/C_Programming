#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 7

int main()
{
  int i = 0, cnt  = 0, Arr[size];

  for(i = 0; i < size; i++)
  {
    printf("\nEnter Element %d =>", (i + 1));
    scanf("%d",&Arr[i]);
  }
  getch();
  system("cls");

  printf("\nEnter Element to be Searched :");
  scanf("%d",&cnt);

  for(i = 0; i < size; i++)
  {
    if(cnt == Arr[i])
    {
      break;
    }
  }
  if(i == size)
  {
    printf("\nEntered Element Not Found in Given Array.");
  }
  else
  {
    printf("\nEntered Element Found at Location => %d",(i + 1));
  }
  getch();
  return 0;
}
