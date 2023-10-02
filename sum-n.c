//• Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>
int main(){
int n;
printf("enter the number of place you want n natural sum : ");
scanf("%d",&n);

int i = 1 , sum =0 ; 
while(i <= n)
{
sum =sum +i;
i = i +1 ;
}
printf("the n natural sum is be : %d", sum);

 return 0;
}