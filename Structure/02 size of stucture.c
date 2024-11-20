#include<stdio.h>
#include<conio.h>

struct stud
{
    char b;
    char *Name[2];
    int s;
};

int main()
{
        struct stud s;

        printf("\nsize of structure object : %d",sizeof(s));

        getch();
        return 0;

}
