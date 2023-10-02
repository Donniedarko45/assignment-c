#include<stdio.h>
int main()
{
    int a;
    printf("enter number to check");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("number is positive");
    }
    else
    {
        printf("number is negative");
    }
    printf(" %d ",a);
    return 0;
}