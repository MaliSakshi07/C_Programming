//Crate Array of 7 Elements With Null(0) Initilization, Accept & Display All Elements with Loop.
#include<stdio.h>
#include<conio.h>
int main()
{
    int Arr[7] = {}, i = 0;

    for(i =0; i<7; i++)
    {
        printf("\n Value of Roll No %d = %d\n",i + 101,Arr[i]);
    }
    getch();

    printf("\nEnter Array Elements =\n");

    for(i=0; i<7; i++)
    {
       printf("\n Enter Element %d = ",i+201);
       scanf("%d",&Arr[i]);
    }
    for(i=0; i<7; i++)
    {
        printf("\n Value Of Roll No %d = %d",i+501,Arr[i]);
    }
    printf("\n Press Any Key to Continue....");
    getch();
    return 0;
}
