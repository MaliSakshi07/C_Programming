#include<stdio.h>
#include<Conio.h>
#include<string.h>

struct student
{
         int RollNo;
         char Name[12];
         char city[8];
         float per;
};

int main()
{
  struct student ;
  int i = 0;

  for(i = 1; i <= 3; i++)
   {
  printf("\nEnter RollNo :");
  scanf("%d",&stdi.RollNo);

  printf("\nEnter Name :");
  scanf("%[^\n]",&stdi.Name);
  fflush(stdin);

  printf("\nEnter city :");
  scanf("%[^\n]",&stdi.city);
  fflush(stdin);

  printf("\nEnter percentage :");
  scanf("%f",&stdi.per);
  fflush(stdin);
for(i = 1; i <= 3; i++)
{
  printf("\n Student Details Given Are =>\n\n\tRollNo - %d.\n\t Name - %s. \n\t city - %s.\n\tpercentage - %0.4f.\n",stdi.RollNo,stdi.Name,stdi.city,stdi.per);
}
  getch();
  return 0;
}
