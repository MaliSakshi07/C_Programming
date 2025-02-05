#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,x=0,k=0;

    printf("\nEnter a Pattern :");
    scanf("%d",&x);

    for(i=1;i<=x;++i,k=0)
    {
        for(j=1;j<=x-i;++j)
        {
            printf("   ");
        }
        while(k !=2 *i-1)
        {
            printf(" * ");
            k++;
        }
        printf("\n");
    }

    getch();
    return 0;
}
