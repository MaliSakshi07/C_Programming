#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int space_cnt = 0, i = 0;

    printf("\n Enter a string = ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] == ' ')
        {
            space_cnt++;
        }
        i++;
    }

    printf("\n count of white spaces in given string is = %d.",space_cnt);

    getch();
    return 0;
}

