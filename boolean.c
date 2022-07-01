#include <stdio.h>   // for input and output
#include <stdbool.h> // for boolean
/*
REMEMBER TO ALWAYS INSERT THE EXPECTED LIBRARY(stdbool.h)

Also Note that the outputs in C boolean are represented in 0 and 1 unline other languages like Javascript
0 = false
1 = true

Note, boolean are declared in int and no other one and also use the %d specifier
AND && 0R 
*/

int num1 = 2;
int num2 = 5;
int num3 = 8;
double num4 = 10.00;
double num5 = 12.22;
double num6 = 15.22;
float num7 = 12.00;
float num8 = 10.22;
float num9 = 50.22;

int main()
{
    int one = num2 >= num1;
    one ? printf("True") : printf("False"); // using ternery operator
    printf("\nnum2 >= num1: %d", one);

    printf("\n");
    int two = num5 >= num8;
    two ? printf("True") : printf("False"); // using ternery operator
    printf("\nnum5 >= num8: %d", two);

    printf("\n");
    int three = num9 <= num6;
    three ? printf("True") : printf("False"); // using ternery operator
    printf("\nnum9 <= num6: %d", three);

     printf("\n");
    int four = num7 == num3;
    four ? printf("True") : printf("False"); // using ternery operator
    printf("\nnum9 <= num6: %d", four);

     printf("\n");
    int five = num3 != num5;
    five ? printf("True") : printf("False"); // using ternery operator
    printf("\nnum3 != num5: %d", five);

    return 0;
}