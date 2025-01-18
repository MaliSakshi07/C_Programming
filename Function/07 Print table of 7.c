#include<stdio.h>
#include<conio.h>

void PrintTable();

int main()
{
    PrintTable();

    getch();
    return 0;
}

void PrintTable()
{
    int No = 7, i = 1;

    printf("\nTable of %d =\n",No);

    while(i<=10)
    {
        printf("%d * %d = %d\n",No,i,(No*i));
        i++;
    }
    return;
}
