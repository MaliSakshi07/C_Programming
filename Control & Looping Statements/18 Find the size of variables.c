#include<stdio.h>
#include<conio.h>
int main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("\nSize of int : %d Byte\n",sizeof(intType));
    printf("\nSize of float : %d Byte\n",sizeof(floatType));
    printf("\nSize of double : %d Byte\n",sizeof(doubleType));
    printf("\nSize of char : %d Byte\n",sizeof(charType));

    getch();
    return 0;
}
