#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int cap_cnt = 0, small_cnt = 0, D_cnt = 0, sp_cnt = 0, i = 0;

    printf("\n Enter a string =");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 'A' && cSrc[i] <= 'Z')
        {
            cap_cnt++;
        }
    else if(cSrc[i] >= 'a' && cSrc[i] <= 'z')
    {
        small_cnt++;
    }
    else if(cSrc[i] >= '0' && cSrc[i] <= 'z')
    {
        D_cnt++;
    }
    else
    {
        sp_cnt++;
    }
        i++;
    }
   printf("\n Count of capital leters of given string is = %d",cap_cnt);
   printf("\n Count of small leters of given string is = %d",small_cnt);
   printf("\n Count of Digits of given string is = %d",D_cnt);
   printf("\n Count of special symbols of given string is = %d",sp_cnt);

   getch();
   return 0;
}
