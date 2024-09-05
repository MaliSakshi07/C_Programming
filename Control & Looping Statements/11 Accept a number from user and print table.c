#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, No = 0;

    printf("\nEnter a Number To Print Table :");
    scanf("%d",&No);

    for(i = 1; i <=10; i++)
    {
        printf("\t%d\n",i*No);
    }
    printf("\nThanks!!!");

    getch();
    return 0;
}
