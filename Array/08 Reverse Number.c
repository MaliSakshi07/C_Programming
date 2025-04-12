#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[5] = {1,2,3,4,5}, darr[5] = {}, i = 0, j = 0,len = 4;

    while(i < 5)
    {
        darr[j] = arr[len];
        j++;
        len--;
        i++;
    }
    for(i=0; i<5; i++)
    {
        printf("%d",darr[i]);
    }
    getch();
    return 0;
}
