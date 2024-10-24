#include<stdio.h>
#include<conio.h>

void strCpyX(char *,char *);

int main()
{
    char cSrc[20] = "";
    char cDest[20] = "";

    printf("\n Enter a string =");
    gets(cSrc);

    strCpyX(cSrc,cDest);

    printf("\n source string is = %s",cSrc);
    printf("\n copied string is = %s",cDest);

    getch();
    return 0;
}
void strCpyX(char *inSrc,char *outSrc)
{
        int i =0;

        while(inSrc[i] != '\0')
        {
            outSrc[i] = inSrc[i];
            i++;
        }
        outSrc[i] = '\0';

        return;
}
