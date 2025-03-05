#include<stdio.h>
#include<conio.h>

int main()
{
    int short No1;
    int No2;
    long No3;
    long long No4;
    signed int No5;
    unsigned int No6;

    printf("\nSize Of Short = %d",sizeof(short));
    printf("\nSize Of int = %d",sizeof(int));
    printf("\nSize Of long = %d",sizeof(long));
    printf("\nSize Of long long = %d",sizeof(long long));
    printf("\nSize Of signed int = %d",sizeof(signed int));
    printf("\nSize Of unsigned int = %d",sizeof(unsigned int));

    getch();
    return 0;
}
