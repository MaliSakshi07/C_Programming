#include<stdio.h>
#include<conio.h>
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
    struct student std1, std2, std3 = {21, "Raj Kumar", "Karad", 95.89};

    std1.RollNo = 1;
    strcpy(std1.Name,"Amey Wagh");
    strcpy(std1.city,"pune");
    std1.per = 78.90;

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

  printf("\n1st Student Details Given Are =>\n\n\tRollNo - %d.\n\t Name - %s. \n\t city - %s.\n\tpercentage - %0.2f.\n",std1.RollNo,std1.Name,std1.city,std1.per);
  printf("\n2st Student Details Given Are =>\n\n\tRollNo - %d.\n\t Name - %s. \n\t city - %s.\n\tpercentage - %0.2f.\n",std2.RollNo,std2.Name,std2.city,std2.per);
  printf("\n3st Student Details Given Are =>\n\n\tRollNo - %d.\n\t Name - %s. \n\t city - %s.\n\tpercentage - %0.2f.\n",std3.RollNo,std3.Name,std3.city,std3.per);

  getch();
  return 0;
}
