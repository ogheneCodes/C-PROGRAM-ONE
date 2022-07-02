#include<stdio.h>
/* Build a calculator
using switch statetment
*/

int main(){
char operators;
printf("Enter any of this ['+', '-', '/', '*']: ");
scanf("%c", &operators);
printf("\n");

double num1;
printf("Enter Number one: ");
scanf("%lf", &num1);
printf("\n");




double num2;
printf("Enter Number two: ");
scanf("%lf", &num2);
printf("\n");


double result;
switch (operators)
{
case '+':
    result = num1 + num2;
    break;
case '-':
    result = num1 - num2;
    break;
case '/':
    result = num1 / num2;
    break;
case '*':
    result = num1 * num2;
    break;
default:
    printf("Wrong Operator used here, try again");
    break;
}
printf("Your Answer is: %.2f", result);
return 0;

}