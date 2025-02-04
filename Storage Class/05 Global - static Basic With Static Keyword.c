#include<stdio.h>
#include<conio.h>
int Book_Read();
int Res = 10;

int main()
{
    int T_Pages = 0, Day_Cnt = 1, R_Pages = 0;

    printf("\nEnter How Many Pages in Book = ");
    scanf("%d",&T_Pages);

    while(R_Pages < T_Pages)
    {
        R_Pages = Book_Read();
        printf("\nPages Read By Day %d = %d\n",Day_Cnt,R_Pages);
        Day_Cnt++;
    }
    printf("\nCongrats!!! You Have Completed This Book in %d Days...",Day_Cnt);

    getch();
    return 0;
}

int Book_Read()
{
    int PCnt = 0;

    printf("\nHoe Many Pages Read Today = ");
    scanf("%d",&PCnt);

    Res = Res + PCnt;

    return Res;
}
