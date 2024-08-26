#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b = 2, c = 5;

    a=(b,b++,b+c);

    printf("%d",a);

    getch();
    return 0;
}
