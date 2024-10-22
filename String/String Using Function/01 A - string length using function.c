#include<stdio.h>
#include<conio.h>

int strlenX(char[20]);

int main()
{
    char cSrc[20]={'\0'};
    int len = 0;

    printf("\n Enter a string :");
    gets(cSrc);

    len = strlenX(cSrc);

    printf("\n lenght of given string is = %d",len);

    getch();
    return 0;

    }
int strlenX(char cArr[])
{
    int cnt = 0;

    printf("\n size = %d.\n", sizeof(cArr));

    while(cArr[cnt] != '\0')
    {
      cnt++;
    }

    return cnt;
}
