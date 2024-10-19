#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int count = 0;
    char Name[20] = "";
    char SName[20] = "";

    printf("\n Enter Name1 =");
    gets(Name);

    printf("\n Enter Name2 =");
    gets(SName);

    count = strncmp(Name,SName,4);

    if(count == 0)
    {
        printf("\n string 1st has 4 letters same as 2nd strings.");
    }
    else
    {
        printf("\n string 1st has 4 letters Different as 2nd strings..");
    }
    getch();
    return 0;
}
