#include<stdio.h>
#include<conio.h>

void swap(int*,int*);

int main()
{
    int No1 = 0, No2 = 0;

    printf("\nEnter Two Numbers:");
    scanf("%d%d",&No1,&No2);

    printf("\nGiven Numbers Before Swapping =>\n");
    printf("\n\t No1 = %d \t No2 = %d",No1,No2);

    swap(&No1,&No2);

    printf("\n=======================================\n");

    printf("\nGiven Numbers After Swapping =>\n");
    printf("\n\t No1 = %d \t No2 = %d",No1,No2);

    getch();
    return 0;
}
void swap(int *p1,int*p2)
{
    int Temp = 0;

    Temp = *p1;
    *p1 = *p2;
    *p2 = Temp;
}
