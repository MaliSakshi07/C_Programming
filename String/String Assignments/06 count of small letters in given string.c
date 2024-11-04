#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int small_cnt = 0, i = 0;

    printf("\n Enter a string =");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 'a' && cSrc[i] <= 'z')
        {
        small_cnt++;
        }
        i++;
    }
    printf("\n Count of small letters in given string = %d",small_cnt);

    getch();
    return 0;
}
