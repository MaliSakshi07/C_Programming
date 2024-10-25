#include<stdio.h>
#include<conio.h>

int ispalindrome(char *);

int main()
{
    char cSrc[20] = "";
    int Res = 0;

    printf("\n Enter a string = ");
    gets(cSrc);

    Res = ispalindrome(cSrc);

    if(Res == 1)
    {
        printf("\n Given string is palindrome.");
    }
    else
    {
        printf("\n Given string is not palindrome.");
    }

    getch();
    return 0;

}
int ispalindrome(char *str)
{
    int i = 0, j = 0;

    while(str[j] != '\0')
    {
        j++;
    }
    j = j - 1;

    while(i < j)
    {
        if(str[i] != str[j])
        {
            break;
        }
        i++;
        j--;
    }
    if(i >= j)
    {
        return 1;
    }
}
