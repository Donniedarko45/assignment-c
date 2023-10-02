// Program of Armstrong Number in C Using For Loop & While Loop


#include<stdio.h>
int main()
{
int n ,  m;
printf("enter a number");
scanf("%d", &n);
m = n;

 int number = 0 , remainder ;
 for(int i = n ; n != 0 ; n = n/10)
{
    remainder = n%10;
    number = number + (remainder * remainder * remainder);
}
    if (number == m)
{
    printf("its is a armstrong number");
}
else
{
    printf("its not a armstrong number");
}

return 0;
}