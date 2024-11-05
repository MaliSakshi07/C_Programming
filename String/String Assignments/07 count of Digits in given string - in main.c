#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int D_cnt = 0, i = 0;

    printf("\n Given string is =");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= '0' && cSrc[i] <= '9')
        {
            D_cnt++;
        }
        i++;
    }
    printf("\n Count of Digits in given string is = %d.",D_cnt);

    getch();
    return 0;
}
