#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int i = 0, j = 0;

    printf("\n Enter  a string =");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        i++;
    }
    i--;

    while(i >= j)
    {
        if(cSrc[i] != cSrc[j])
        {
            break;
        }
        i--;
        j++;
    }
    if(i < j)
    {
        printf("\nGiven string is pallindrome.");
    }
    else
    {
        printf("\nGiven string is not pallindrome.");
    }
    getch();
    return 0;
}
