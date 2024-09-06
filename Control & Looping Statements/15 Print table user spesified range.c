#include<stdio.h>
#include<conio.h>

int main()
{
    int S_No = 0, E_No = 0, C = 0, R = 0;

    printf("\nEnter Start No =");
    scanf("%d",&S_No);

    printf("\nEnter End No =");
    scanf("%d",&E_No);

    printf("\nTable in Range %d To %d :\n\n",S_No, E_No);

    for(R = 1; R <= 10; R++)
    {
        for(C = S_No; C <= E_No; C++)
        {
            printf("%4d",R*C);
        }
        printf("\n");
    }
    printf("\n================================\n");

    getch();
    return 0;
}
