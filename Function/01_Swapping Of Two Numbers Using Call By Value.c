#include<stdio.h>
#include<conio.h>

void swap(int,int);

int main()
{
   int No1 = 0 , No2 = 0;

   printf("Enter Two Numbers:");
   scanf("%d%d",&No1,&No2);

   printf("\n Given Numbers Before Swapping =>\n");

   printf("\n\t No1=%d \tNo2=%d\n",No1,No2);

   swap(No1,No2);

   printf("\n======================================\n");

   printf("\n Given Number After Swapping =>\n");
   printf("\n\t No1 = %d \t No2 = %d",No1,No2);

   getch();
   return 0;
}
void swap(int N1,int N2)
{
    int Temp=0;

    Temp = N1;
    N1 = N2;
    N2 = Temp;
}
