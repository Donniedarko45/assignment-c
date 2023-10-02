// Checking Whether You Are Eligible for Voting or Not

#include<stdio.h>
int main()
{
    int age;
    printf("enter the age to check eligibility");
    scanf(" %d ",&age);
    if(age>=18)
    {
        printf("you are eligible for voting");
    }
    else
    {
        printf("you are not eligible for voting");
    }
    return 0;
}