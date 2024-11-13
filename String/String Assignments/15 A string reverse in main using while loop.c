#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    char cDest[20];
    int  i = 0, j= 0;

    printf("\n Enter given string =");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        i++;
    }
    i--;
    while(i >= 0)
    {
        cDest[j] = cSrc[i];
        j++;
        i--;
    }
    cDest[j] = '\0';

    printf("\n Given string is = %s !!!",cSrc);
    printf("\n Reverse of given string is = %s $$$",cDest);

    getch();
    return 0;
}
