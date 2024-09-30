#include<stdio.h>
#include<conio.h>
int main()
{
    char ch ='A';
    char *cptr = &ch;

    int No = 15;
    int *pnum = &No;

    printf("\n Size of ch = %d.",sizeof(ch));
    printf("\nSize of cptr = %d",sizeof(cptr));

    printf("\nValue of ch = %c",ch);
    printf("\n Address of ch = %d",&ch);

    printf("\n Value in Pointer = %d",cptr);
    printf("\n Address of Pointer = %d",&cptr);
    printf("\n value in variable using pointer = %c",*cptr);
    printf("\n============================================\n");

    printf("\n Size of No = %d",sizeof(No));
    printf("\n Address of No = %d",&No);

    printf("\nValue of No = %d",sizeof(No));
    printf("\nAddress of no = %d",&No);

    printf("\nValue in Pointer = %d",pnum);
    printf("\nAddress of pointer = %d",&pnum);
    printf("\nValue in variable using pointer = %d",*pnum);

    getch();
    return 0;
}
