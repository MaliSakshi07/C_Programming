#include<stdio.h>
#include<conio.h>
char Reverse_First_Word(char *, char *);

int main()
{
    char cSrc[40] = "";
    char cDest[40] = "";

    printf("\nEnter a String :");
    gets(cSrc);

    Reverse_First_Word(cSrc,cDest);

    printf("\nGiven String : %s" ,cSrc);
    printf("\nFirst Reverse Word Of Given String : %s" ,cDest);

    getch();
    return 0;
}

char Reverse_First_Word(char *src, char *dest)
{
    int i = 0 , j = 0;

    while(src[i] != '\0')
    {
        while(src[i] == ' ' || src[i] == '.' || src[i] == ',' || src[i] == '\t')
        {
            i++;
        }
        while(src[i] != '\0' && src[i] != ' ' && src[i] != '.' && src[i] != ',' && src[i] != '\t')
        {
            i++;
        }
        break;
    }
    i--;

    while(i >= 0)
    {
        dest[j] = src[i];
        j++;
        i--;
    }
    i = j;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    return;
}
