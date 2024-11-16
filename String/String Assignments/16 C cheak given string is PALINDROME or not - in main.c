#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int i = 0, j = 0;

    printf("\n Enter a string =");
    gets(cSrc);

    for(i  = 0; cSrc[i] != '\0'; i++);

    for(i = i - 1; i >= j; i--, j++)
    {
        if(cSrc[i] != cSrc[j])
        {
            break;
        }
    }
    if(i < j)
    {
        printf("\n Given string is pallindrome.");
    }
    else
    {
        printf("\n Given string is Not pallindrome.");
    }

    getch();
    return 0;
}
