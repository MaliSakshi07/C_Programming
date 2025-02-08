#include<stdio.h>
#include<conio.h>
int main()
{
    int n=0,c=0,r=0;

    printf("\nEnter a Number for Pattern :");
    scanf("%d",&n);

    for(r=1; r<=n; r++)
    {
        for(c =1; c<=n-r; c++)
        {
            printf(" ");
        }
        for(c=1; c<=2*r-1; c++)
        {
            if(c <= r)
            {
                printf("%c",c+64);
            }
            else
            {
                printf("%c",2*r-c+64);
            }
        }
        printf("\n");
    }

    for(r=n-1; r>=1; r--)
    {
        for(c=1; c<=n-r; c++)
        {
            printf(" ");
        }
        for(c=1; c<=2*r-1; c++)
        {
            if(c <= r)
            {
                printf("%c",c+64);
            }
            else
            {
                    printf("%c",2*r-c+64);
            }
        }
        printf("\n");
    }

    getch();
    return 0;

}
