#include<stdio.h>
#include<conio.h>

int main()
{
  char ch ='\0';

  printf("\n Enter a character = ");
  scanf("%c",&ch);

  switch(ch)
  {
   case'A':
   case'a':
   case'E':
   case'e':
   case'I':
   case'i':
   case'O':
   case'o':
   case'U':
   case'u':

       printf("\nGiven character is Vowel.");
       break;

   default:
       printf("\nGiven character is Alphabet.");
       break;
  }
  printf("\n\nThanks!!!...");

  getch();
  return 0;
}
