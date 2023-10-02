//  find the Greatest Among Three Numbers

#include<stdio.h>
int main()
{
    int a,b,c;
    printf ("enter the inputs to check which is greater");
    scanf(" %d\n %d\n %d ", &a, &b, &c);

//check for a using if condition

    if(a>b && a>c)
    {
        printf("a is greater among all");
    }

//check for b using else if

    else if(b>a && b>c)
    {
        printf("b is greater among all");
    }
    else
    {
       printf("c is greater among all");
    }
      return 0;
}