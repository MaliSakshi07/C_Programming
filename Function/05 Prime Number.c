#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0, PNo=0;

    printf("Enter a Number :");
    scanf("%d",&No);

    PNo = PNum(No);

    if(PNo == 1)
    {
        printf("\nThe number %d is prime number.",No);
    }
    else
    {
        printf("\nThe number %d is not prime number.",No);
    }
    return 0;
}
int PNum(int No)
{
    int i =2;
    while(i < No/2)
    {
        if(No%i==0)
        {
            return 0;
        }
        else
        {
            i++;
        }
    }
    return 1;
}
