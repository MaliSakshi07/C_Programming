#include<stdio.h>
#include<conio.h>

int main()
{
    int sal = 0, stud = 0;

    printf("\nEnter Your Salary :");
    scanf("%d",&sal);

    printf("\nEnter 1 if you student :");
    scanf("%d",&stud);

    if(sal <= 0)
    {
        if(sal == 0)
        {
            printf("\nCandidate is Student");
        }
        else
        {
            printf("\nCandidate is Fresher");
        }
    }
    else
    {
      if(sal > 50000)
      {
          printf("\nCandidate is an Expert Employee.");
      }
      else
      {
          printf("\nCandidate is an Begginer Employee.");
      }
    }

    getch();
    return 0;
}
