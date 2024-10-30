#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char cSrc[20] = {'\0'};
    int Len = 0;

    printf("\n Enter a string =");
    gets(cSrc);

    Len = printf("%s",cSrc);

    getch();
    system("cls");

    printf("\n Lenght of given string %s is = %d ",cSrc,Len);

    getch();
    return 0;
}
