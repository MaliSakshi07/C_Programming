#include<stdio.h>
#include<conio.h>
int Each_Word_Reverse(char *);

int main()
{
    char cSrc[40] = "";

    printf("\nEnter a String :");
    gets(cSrc);

    Each_Word_Reverse(cSrc);

    getch();
    return 0;
}

int Each_Word_Reverse(char *src)
{
    int i = 0, j = 0, k = 0;
    char *Temp = src, T1 = '\0';

    while(src[i] != '\0')
    {
        while(src[i] == ' ' || src[i] == '.' || src[i] == ',' || src[i] == '\t')
        {
            i++;
        }
        if(src[i] != '\0')
        {
            Temp = &src[i];
            j = i;
        }
        while(src[i] != '\0' && src[i] != ' ' && src[i] != ',' && src[i] != '.' && src[i] != '\t')
        {
            i++;
        }
    }
    i--;

    while()
    {

    }

    printf("\n%s",src);

    getch();
    return 0;
}
