#include<stdio.h>
#include<conio.h>
int Last_Word_Count(char*);

int main()
{
    char cSrc[40] = "";

    printf("\nEnter a String :");
    gets(cSrc);

    printf("\nLength Of Last Word in Given String : %d.",Last_Word_Count(cSrc));

    getch();
    return 0;

}
int Last_Word_Count(char *src)
{
    int i = 0, wLen = 0;
    char *Temp = src;

    while(src[i] != '\0')
    {
        while(src[i] == ' ' || src[i] == '.' || src[i] == ',' || src[i] == '\t')
        {
            i++;
        }
        if(src[i] != '\0')
        {
            Temp = &(src[i]);
            printf("\n%c",src[i]);
        }
        while(src[i] != '\0' && src[i] != ' ' && src[i] != '.' && src[i] != ',' && src[i] != '\t')
        {
            i++;
        }
    }
    while(*Temp != '\0' && *Temp != ' ' && *Temp != '.' && *Temp != ',' && *Temp != '\t')
    {
        Temp++;
        wLen++;
    }
    return wLen;
}
