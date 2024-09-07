#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, c = 0, r = 0;

    printf("\nEnter Row Value for Pattern : ");
    scanf("%d",&r);
    printf("\nEnter Column Value for Pattern : ");
    scanf("%d",&c);

    printf("\n======= Pattern ======\n");

    for(i = 1; i <= r; i++)
    {
        for(j = 1; j<=c; j++)
        {
            if(i == 1 || j == 1 || i == r || j == c)
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
    printf("\n======================\n");

    getch();
    return 0;
}
