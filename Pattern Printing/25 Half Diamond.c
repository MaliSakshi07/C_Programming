#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0, j=0, x=0;

    printf("\nEnter value for Pattern :");
    scanf("%d",&x);

    for(i=0; i<=x; i++)
    {
        printf(" ");
        for(j=0; j<=x; j++)
        {
            if(i+j >= x+1)
            {
                printf(" * ");
            }
        }
        printf("\n");
    }

    for(i=0; i<=x; i++)
    {
        printf(" ");
        for(j=0; j<=x; j++)
        {
            if(i <= j)
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
