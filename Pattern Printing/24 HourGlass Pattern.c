#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,n=0;

    printf("\nEnter a Value for Pattern :");
    scanf("%d",&n);

    for(r=n;r>=1;r--)
    {
        for(c=1;c<=n-r;c++)
        {
            printf(" ");
        }
        for(c=1;c<=2*r-1;c++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(r=2; r<=n; r++)
    {
        for(c=1;c<=n-r;c++)
        {
            printf(" ");
        }
        for(c=1;c<=2*r-1;c++)
        {
            printf("*");
        }
        printf("\n");
    }

    getch();
    return 0;
}
