#include<stdio.h>

/*Functions
Remember if a fucntion does not return a value, use VOID! (void))
TASK: create a function that do arithmetic
*/


void add(int num1, int num2){
    int sum = num1 + num2;
    printf("The Sum of %d + %d: %d\n", num1, num2, sum);
}
void subtraction(int num1, int num2){
    int minus = num1 - num2;
    printf("The subtraction of %d - %d: %d\n", num1, num2, minus);
}
void multiplication(int num1, int num2){
    int multiply = num1 * num2;
    printf("The multiplication of %d x %d: %d\n", num1, num2, multiply);
}
void division(int num1, int num2){
    int divide = num1 / num2;
    printf("The division of %d x %d: %d\n", num1, num2, divide);
}


int main(){

add(5, 5); // addition
subtraction(50, 24); //subtraction
multiplication(12, 12); //multiplication
division(12, 6); //division

return 0;
}