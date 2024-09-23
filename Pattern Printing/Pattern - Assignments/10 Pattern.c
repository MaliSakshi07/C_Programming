/*
2
2 4
2 4 6
2 4 6 8
2 4 6 8 10
*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int c=0, r=0, x=0, i=0;

    printf("\nEnter Size For Pattern :");
    scanf("%d",&x);

    printf("\n====== Pattern ======\n");

    for(r=1; r<=x; r++)
    {
        for(c=1,i=2; c<=x; c++,i++)
        {
           if(r>=c)
           {
               printf(" %d ",i);
               i++;
           }
           else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n==================\n");

    getch();
    return 0;
}
