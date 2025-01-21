#include<stdio.h>
#include<conio.h>

void Printtable(int);              //Function Declaration

int main()
{
    int No = 0;

    printf("\nEnter a Number :");
    scanf("%d",&No);

    Printtable(No);

    printf("Thanks!!!");

    getch();
    return 0;
}

void Printtable(int Num)            //Function Defination
{
    int i =1;

    printf("\nTable of %d = \n\n",Num);

    while(i<=10)
    {
        printf("%d * %d = %d\n",Num,i,(Num*i));
        i++;
    }

    return;
}
