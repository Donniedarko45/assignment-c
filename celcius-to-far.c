#include<stdio.h>
int main()
{
    float cel,Fahrenheit;
    printf("enter celcius");
    scanf("%f",&cel);
    Fahrenheit=(cel*1.8)+32;
    printf("converted form is %f",Fahrenheit);
    return 0;
}