#include<stdio.h>
#include<conio.h>
int main()
{
    int No1=0, No2=0, No3=0;

    printf("\nEnter 3 Different Numbers :");
    scanf("%d\n%d\n%d",&No1,&No2,&No3);

    if(No1 >= No2 && No1 >= No3)
    {
        printf("\n%d is Largest Number.",No1);
    }
    else if(No2 >= No1 && No2 >= No3)
    {
        printf("\n%d is Largest Number.",No2);
    }
    else
    {
        printf("\n%d is Largest Number.",No3);
    }
    getch();
    return 0;
}
