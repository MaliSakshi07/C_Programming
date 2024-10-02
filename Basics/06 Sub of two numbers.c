#include<stdio.h>
#include<conio.h>
int main()
{
    int No1=0,No2=0,No3=0;
    printf("Enter Numbers :");
    scanf("%d%d",&No1,&No2);

    No3 = No1-No2;

    printf("The Sub is %d.",No3);

    getch();
    return 0;
}
