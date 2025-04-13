#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[5] = {}, darr[5] = {},i=0,j=0,len = 4;

    for(i =0; i<5; i++)
    {
        printf("Enter a Number :");
        scanf("%d",&arr[i]);
    }
    i = 0;
    while(i < 5)
    {
        darr[j] = arr[len];
        i++;
        len--;
        j++;
    }
    for(i=0; i<5; i++)
    {
        printf("%d",darr[i]);
    }
    getch();
    return 0;
}
