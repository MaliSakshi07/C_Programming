#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, x = 0;

    printf("\nEnter Size For Pattern :");
    scanf("%d",&x);

    printf("\n====== Pattern ======\n");

    for(i=1; i<=x; i++)
    {
        for(j=1; j<=x; j++)
        {
            if(i >= j)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("=========================");

    getch();
    return 0;
}
