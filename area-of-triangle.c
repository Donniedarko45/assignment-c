#include<stdio.h>
int main()
{
    float hieght,base,area;
    printf("enter base\n");
    scanf("%f",&base);
    printf("enter hieght\n");
    scanf("%f",&hieght);
    area=0.5*base*hieght;
    printf("area of triangle is  %f",area);
    return 0;
}