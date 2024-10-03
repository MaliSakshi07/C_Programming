#include<stdio.h>
#include<conio.h>

int main()
{
  int r = 0, c = 0, cnt = 0;
  char ch = 'A';

  printf("\n Enter row and column for count = ");
  scanf("%d",&cnt);

  for(r = 1; r <= cnt; r++)
  {
    for(ch = 'A', c = 1; c <= cnt; c++)
    {
      if(r == 1 || r == cnt || c == 1 || c == cnt)
      {
        if(c == 1 || c == cnt)
        {
          ch = 'A' + (r - 1);
        }
        printf(" %c ", ch);
        ch++;
      }
      else
      {
        printf("   ");
      }
    }
    printf("\n");
  }
  getch();
  return 0;
  }
