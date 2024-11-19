#include<stdio.h>
#include<conio.h>

struct stud1
{
        char Nm[7];
        char city[9];
        int R_no;
        long int Mob_No;
        float per;
};

struct stud2
{
         int R_No;
         char Nm[7];
         long int Mob_No;
         char city[9];
         float per;
};

struct stud3
{
         char Nm[7];
         int R_No;
         char city[9];
         long int Mob_No;
         float per;
};

int main()
{
  struct stud1 std1;
  struct stud2 std2;
  struct stud3 std3;

  printf("\nSize of 1st structure object : %d",sizeof(std1));
  printf("\nSize of 2nd structure object : %d",sizeof(std2));
  printf("\nSize of 3rd structure object : %d",sizeof(std3));

  getch();
  return 0;
}
