#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int cap_cnt = 0, i = 0;

    printf("\n Enter a string = ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 65 && cSrc[i] <= 90)
        {
            cap_cnt++;
        }
        i++;
    }
    printf("\n Count of capital letters in given string = %d",cap_cnt);

    getch();
    return 0;
}
