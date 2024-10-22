#include<stdio.h>
#include<conio.h>

int strlenX(char *);

int main()

{
        char cSrc[20]={'\0'};

        puts("\n Enter a string = ");
        gets(cSrc);

        printf("\n Lenght of given string is = %d",strlenX(cSrc));

        getch();
        return 0;
}
int strlenX(char *cptr)
{
    int Cnt = 0;

    for(Cnt = 0; cptr[Cnt] != '\0';Cnt++);

    return Cnt;
    }
