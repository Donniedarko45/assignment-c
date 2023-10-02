//C Program to Check Uppercase or Lowercase or Digit or Special Character


#include<stdio.h>
int main()
{
    char c;
    printf("enter what you want to know ");
    scanf("%c",&c);

    if(c>='a' && c<='z')
    {
        printf("\nentered input is lowercase ");
    }
     else if( c>='A' && c<='Z')
     {
        printf("entered input is in uppercase");
     }
     else if( c>='0' && c<='9')
     {
        printf("entered input is not a special character");
     }
     else
     {
        printf("entered input is a special character");
     }  
     return 0; 
}