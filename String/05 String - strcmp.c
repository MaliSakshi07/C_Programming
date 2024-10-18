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
    printf("\n Enter Nmae2 =");
    gets(SName);

    count = strcmp(Name,SName);

    printf("\n %d \n",count);

    if(count == 0)
    {
        printf("\n Both strings are SAME.");
    }
    else
    {
        printf("\n Both strings are DIFFERENT.");
    }
    getch();
    return 0;
}
