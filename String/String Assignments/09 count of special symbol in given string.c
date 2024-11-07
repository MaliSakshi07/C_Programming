#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int sp_cnt = 0, i = 0;

    printf("\n Enter a string =");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(!(cSrc[i] >= 'A' && cSrc[i] <= 'Z') && !(cSrc[i] >= 'a' && cSrc[i] <= 'z') && !(cSrc[i] >= '0' && cSrc[i] <= '9'))
        {
            sp_cnt++;
        }
        i++;
    }
    printf("\n count of special symbol in given string is = %d.",sp_cnt);

    getch();
    return 0;
}
