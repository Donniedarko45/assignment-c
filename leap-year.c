#include<stdio.h>
int main()
{
   int a;

   printf("enter the year to check whether it is leap year or not ");
   scanf(" %d ",& a);
   
   if(a%4==0)
   {
    printf("entered year is leap");
   }
   else
   {
    printf("entered year is not leap");
   }
   return 0;
}  