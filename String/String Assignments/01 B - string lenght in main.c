#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int i = 0;

    puts("\n Enter a string =");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        i++;
    }
    printf("\n Lenght of given string is = %d",i);

    getch();
    return 0;
}
