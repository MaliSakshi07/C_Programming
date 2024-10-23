#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int strlenX(char *);

int main()
{
    char cSrc[20]={'\0'};
    int len = 0;

    printf("\nEnter a string :");
    gets(cSrc);

    len = strlenX(cSrc);

    system("cls");

    printf("\n Length of given string is = %d",len);

    getch();
    return 0;
}
int strlenX(char cPtr[])
{
    return  printf("%s",cPtr);
}
