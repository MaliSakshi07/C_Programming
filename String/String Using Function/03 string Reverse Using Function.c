#include<stdio.h>
#include<conio.h>

void strRevX(char *,char *);

int main()
{
    char cSrc[20] = "";
    char cDest[20] = "";

    printf("\n Enter a string =");
    gets(cSrc);

    strRevX(cSrc,cDest);

    printf("\n sourse string is = %s.",cSrc);
    printf("\n  Reverse string is = %s.",cDest);

    getch();
    return 0;
}
void strRevX(char *inSrc,char *outSrc)
{
    int i = 0,j = 0;

    while(inSrc[i] != '\0')
    {
        i++;
    }
    i = i-1;

    while(i >= 0)
    {
        outSrc[j] = inSrc[i];
        j++;
        i--;
    }
    outSrc[j] = '\0';
    return;
}
