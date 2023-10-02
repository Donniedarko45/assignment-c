// Count the Number of Digits of an Integer Using the While Loop
#include<stdio.h>
int main(){
int n;
printf(" enter a number : ");
scanf("%d", &n);
int remainder , digits = 0 ;

while(n != 0){
if (n % 10 != 0)
 digits = digits +1;
else 
break;
n = n/10;
}
printf("number of digits = %d" , digits);
return 0;
}