#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,x=0, n=1;

    printf("\nEnter a Number :");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
            if(i >= j)
            {
                printf(" %d ",n);
                n++;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
