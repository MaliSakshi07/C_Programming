#include<stdio.h>
#include<conio.h>

int main()
{
  int iNum[5] = {22, 45, 66, 87,34};

  printf("\n value of 201 Element = %d",iNum[0]);
  printf("\n value of 202 Element = %d",iNum[1]);
  printf("\n value of 203 Element = %d",iNum[2]);
  printf("\n value of 204 Element = %d",iNum[3]);
  printf("\n value of 205 Element = %d",iNum[4]);

  getch();

  iNum[3] = 104;

  iNum[4] = iNum[2];

  iNum[1] += 5;

  printf("\n\n==========*****************=============\n\n");

  printf("\n value of 401 Element = %d",iNum[0]);
  printf("\n value of 402 Element = %d",iNum[1]);
  printf("\n value of 403 Element = %d",iNum[2]);
  printf("\n value of 404 Element = %d",iNum[3]);
  printf("\n value of 405 Element = %d",iNum[4]);

  printf("\n\nPress Any Key to Continue...");
  getch();
  return 0;
}
