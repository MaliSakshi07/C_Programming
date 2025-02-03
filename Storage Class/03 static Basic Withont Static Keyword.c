#include<stdio.h>
#include<conio.h>
int Book_Read();

int main()
{
    int R_Pages = 0, T_Pages = 0,Day = 1;

    printf("\nEnter Total Pages of Book :");
    scanf("%d",&T_Pages);

    while(R_Pages <= T_Pages)
    {
        R_Pages = Book_Read();
        printf("Pages Read By Day %d : %d ",Day,R_Pages);
        Day++;
    }

    printf("\nCongrats!! You are completed this Book...");

    getch();
    return 0;
}

int Book_Read()
{
    int PCnt = 0, Res = 10;

    printf("\nHow many Pages Read Today =");
    scanf("%d",&PCnt);

    Res = Res+PCnt;

    return Res;
}
