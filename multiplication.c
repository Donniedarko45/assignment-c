//multiplication of table N


#include<stdio.h>
int main()
{
    int n ;
    printf("enter a number of which you want multipiclation table : ");
    scanf( "%d", &n);

for (int i = 0 ; i <=  10 ; i++ )
{ 
    printf(" %d * %d = %d \n  ", n , i , n*i);
 }

    return 0 ;
}