#include<stdio.h>
#include<conio.h>
int main()
{
    int No =0, Res =0 ;

    printf("\nEnter A Number :");
    scanf("%d",&No);

    Res = ~No;

    printf("\nResult %d => %d",No,Res);

    getch();
    return 0;
}
