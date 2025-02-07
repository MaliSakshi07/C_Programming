#include<stdio.h>
#include<conio.h>
int main()
{
    int n=0,c=0,r=0;

    printf("\nEnter a Value for pattern :");
    scanf("%d",&n);

    for(r=1; r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
        {
            printf(" ");
        }
        for(c=1;c<=2*r-1;c++)
        {
            if(c <= r)
            {
                printf("%d",c);
            }
            else
            {
                printf("%d",2*r-c);
            }
        }
        printf("\n");
    }

    for(r=n-1; r>=1;r--)
    {
        for(c=1;c<=n-r;c++)
        {
            printf(" ");
        }

        for(c=1;c<=2*r-1;c++)
        {
           if(c <= r)
           {
               printf("%d",c);
           }
           else
           {
                printf("%d",2*r-c);
           }
        }
        printf("\n");
    }

    getch();
    return 0;
}
