#include<stdio.h>
#include<conio.h>

int main()
{
  char cArr[20] = {'K','A','R','A','D'};                //char cArr[20] = "KARAD";

  puts(cArr);

  puts("\nEnter a string =");                            //printf("\nEnter a string");
  gets(cArr);                                             //scanf("%[^\n]",cArr);

  puts("\nGiven string is =");
  puts(cArr);

  getch();
  return 0;
}
