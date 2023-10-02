#include <stdio.h>
int main() {
 char operation;
 double n1, n2;
 float percentage;
 printf("Enter an operator (+, -, *, /,percentage): ");
 scanf("%c", &operation);
 printf("Enter two operands: ");
 scanf("%lf %lf",&n1, &n2);
 switch(operation)
 {
 case '+':
 printf("%.1lf + %.1lf = %.1lf",n1, n2, 
n1+n2);
 break;
 case '-':
 printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-
n2);
 break;
 case '*':
 printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
 break;
 case '/':
 printf("%.1lf / %.1lf = %.1lf",n1, n2, 
n1/n2);
 break;
 case '%':
   //percentage = (float)n1 / n2 * 100.0;
   printf("Percentage : %.1lf", percentage = (n1* 100.0 / n2));
   break;
 // operator doesn't match any case constant +, -, *, /
 default:
 printf("Error! operator is not correct");
 }
 return 0;
}