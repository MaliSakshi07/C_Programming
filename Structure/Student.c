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
  struct student std1, std2, std3;

  printf("\nEnter RollNo :");
  scanf("%d",&std1.RollNo);
  fflush(stdin);

  printf("\nEnter Name :");
  scanf("%[^\n]",&std1.Name);
  fflush(stdin);

  printf("\nEnter city :");
  scanf("%[^\n]",&std1.city);
  fflush(stdin);

  printf("\nEnter percentage :");
  scanf("%f",&std1.per);
  fflush(stdin);

  printf("\nEnter RollNo :");
  scanf("%d",&std2.RollNo);
  fflush(stdin);

  printf("\nEnter Name :");
  scanf("%[^\n]",&std2.Name);
  fflush(stdin);

  printf("\nEnter city :");
  scanf("%[^\n]",&std2.city);
  fflush(stdin);

  printf("\nEnter percentage :");
  scanf("%f",&std2.per);
  fflush(stdin);

  printf("\nEnter RollNo :");
  scanf("%d",&std3.RollNo);
  fflush(stdin);

  printf("\nEnter Name :");
  scanf("%[^\n]",&std3.Name);
  fflush(stdin);

  printf("\nEnter city :");
  scanf("%[^\n]",&std3.city);
  fflush(stdin);

  printf("\nEnter percentage :");
  scanf("%f",&std3.per);
  fflush(stdin);

  printf("\n1st Student Details Given Are =>\n\n\tRollNo - %d.\n\t Name - %s. \n\t city - %s.\n\tpercentage - %0.4f.\n",std1.RollNo,std1.Name,std1.city,std1.per);
  printf("\n2st Student Details Given Are =>\n\n\tRollNo - %d.\n\t Name - %s. \n\t city - %s.\n\tpercentage - %0.4f.\n",std2.RollNo,std2.Name,std2.city,std2.per);
  printf("\n3st Student Details Given Are =>\n\n\tRollNo - %d.\n\t Name - %s. \n\t city - %s.\n\tpercentage - %0.4f.\n",std3.RollNo,std3.Name,std3.city,std3.per);

  getch();
  return 0;
}
