//Largest of Three Numbers in C Using Nested if Else


#include <stdio.h>

int main() {
    // Declare three variables to store the numbers
    int num1, num2, num3;

    // Input the three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Use nested if-else statements to find the largest
    if (num1 >= num2) 
    {
        if (num1 >= num3)
        {
            printf("The largest number is: %d\n", num1);
        }
         else
        {
            printf("The largest number is: %d\n", num3);
        }
    }   
        else
    {
        if (num2 >= num3) 
        {
            printf("The largest number is: %d\n", num2);
        } 
        else
        {
            printf("The largest number is: %d\n", num3);
        }
    }

    return 0;
}
