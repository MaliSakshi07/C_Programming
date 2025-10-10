#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0, j=0, x=0;

    printf("\nEnter a value for Pattern :");
    scanf("%d",&x);

    for(i=x; i>=1; i--)
    {
        for(j=1; j<=x-i; j++)
        {
            printf("   ");
        }
        for(j=1; j<=2*i-1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    
    getch();
    return 0;
}
