#include<stdio.h>
#include<conio.h>
int Word_Count(char *);

int main()
{
    char cSrc[40] = {'\0'};

    printf("\nEnter a String :");
    gets(cSrc);

    printf("\n Word count of given string : %d",Word_Count(cSrc));

    getch();
    return 0;
}

int Word_Count(char *str)
{
    int i = 0, wCnt = 0;

    while(str[i] != '\0')
    {
        while(str[i] == ' ' || str[i] == '.' || str[i] == '\t' || str[i] == ',')
        {
            i++;
        }
        if(str[i] != '\0')
        {
            wCnt++;
        }
        while(str[i] != '\0' && str[i] != ' ' && str[i] != '.' && str[i] != ',' && str[i] != '\t')
        {
            i++;
        }
    }
    return wCnt;
}
