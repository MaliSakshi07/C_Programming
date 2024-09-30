#include<stdio.h>
#include<conio.h>

int main()
{
  int No = 15;

  int *iptr = &No;
  void *vptr = &No;

  printf("\nAddress of No : %d",&No);
  printf("\nAddress of iptr : %d",&iptr);
  printf("\nvalue in iptr : %d",iptr);
  printf("\nValue in No : %d",No);
  printf("\nValue of No by void pointer : %d",*iptr);

  printf("Address of vptr : %d",&vptr);
  printf("value of vptr : %d",vptr);
  //printf("Value of No by void pointer : %d",*vptr);

  getch();
  return 0;
}
