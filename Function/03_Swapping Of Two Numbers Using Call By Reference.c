#include<stdio.h>
#include<conio.h>
void swap(int& ,int&);

int main()
{
    int No1 = 0, No2 = 0;

    printf("\n Enter Two Numbers:");
    scanf("%d%d",&No1,&No2);

    printf("Given Numbers Before Swapping =>");
    printf("\n\t No1 = %d \t No2 = %d",No1,No2);

    printf("\n==================================\n");

    swap(No1&,No2&);

    printf("Given Numbers After Swapping =>");
    printf("\n\t No1 = %d \t No2 = %d",No1,No2);

    getch();
    return 0;
}
void swap(int &R1,int &R2)
{
    int Temp = 0;

    Temp = R1;
    R1 = R2;
    R2 = Temp;
}
