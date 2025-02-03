#include<stdio.h>
#include<conio.h>
int Book_Read();

int main()
{
    int Day_Cnt = 1, T_Pages = 0, R_Pages = 0;

    printf("\nEnter Total Pages Of Book = ");
    scanf("%d",&T_Pages);

    while(R_Pages < T_Pages)
    {
        R_Pages = Book_Read();
        printf("\nPages Read By Day %d = %d\n",Day_Cnt,R_Pages);
        Day_Cnt++;
    }

    printf("\nCongrats!! You Have Completed This Book in %d Days...",Day_Cnt);
    getch();
    return 0;
}

int Book_Read()
{
    static int Res = 10;
    int PCnt = 0;

    printf("\nHow Many Pages Read Today = ");
    scanf("%d",&PCnt);

    Res = Res + PCnt;

    return Res;
}
