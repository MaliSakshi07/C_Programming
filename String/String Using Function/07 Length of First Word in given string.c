#include<stdio.h>
#include<conio.h>
int First_Word_Count(char *);

int main()
{
    char cSrc[40] = "";

    printf("\nEnter a String :");
    gets(cSrc);

    printf("\nLength Of First Element in String : %d",First_Word_Count(cSrc));

    getch();
    return 0;
}

int First_Word_Count(char *Src)
{
    int i = 0 , WLen = 0;

    while(Src[i] != '\0')
    {
        while(Src[i] == ' ' || Src[i] == '.' || Src[i] == ',' || Src[i] == '\t')
        {
            i++;
        }
        while(Src[i] != '\0' && Src[i] != ' ' && Src[i] != '.' && Src[i] != ',' && Src[i] != '\t')
        {
            i++;
            WLen++;
        }
        break;
    }
    return WLen;
}
