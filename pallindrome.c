// Palindrome Program in C Using While Loop
#include<stdio.h>
int main(){
int n , remainder  , reverse = 0 ;
printf("enter a number : ");
scanf("%d",&n);
int m = n;

while (  n != 0 )
{
  remainder = n%10;
  reverse = reverse * 10 + remainder;
   n = n/10;
}
if(reverse == m)
{
printf("This number is a palindrome number ");
}

else
{
printf("not a palindrome number ");
}

    return 0;
}












  