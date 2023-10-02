// C Program to Print Day of Week Name Using Switch Case
#include<stdio.h>
int main()
{
int day_number;
printf("enter the day number (1-7) : ");
scanf("%d",&day_number);

switch(day_number){
  case  1 :
  printf("the day is monday");
  break;

  case  2 :
  printf("the day is tuesday ");
  break;

  case  3 :
  printf("the day is wednesday ");
  break;

  case  4 :
  printf("the day is thursday ");
  break;

  case  5 :
  printf("the day is friday ");
  break;

   case  6 :
  printf("the day is saturday ");
  break;

   case  7 :
  printf("the day is monday");
  break;
  
  default:
  printf("invalid input please enter number (1-7)");

}
return 0;
}