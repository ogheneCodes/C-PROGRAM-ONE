#include <stdio.h>

// Data type in C
/*
int (4 bytes) => %d for printing
double (8 bytes) => %lf for printing
float (4 bytes) => %f for printing
char (1 bytes) => %c for printing
*/

int main()
{
    double number1 = 12.45;
    printf("%lf\n", number1);   // This print the double number completely 12.450000
    printf("%.2lf\n", number1); // This print the double number into 2 decemal 12.45
    printf("\n");

    // REMEBER ALWAYS USE DOUBLE AS IT IS MUCH BETTER AND STORE LARGE NUMBERS IN DECIMAL PATH AS VARIABLES
    float number2 = 10.9;
    printf("\n%f", number2);
    printf("\n%.1f", number2);

    // when working with char, remember Three(3) things
    /* It is used for charaters
    to print char, use %c for format specifier
    char are internally stores as intergers
    */
    /*   Sizeof() operators is used to find the size of a data type,
     to check size of use the %zu format specifier
    */
    char name1 = "max";
    int num1 = 20;
    double num2 = 22.11;
    float num3 = 22.11;
    printf("\nSize of the number for char string value for name1 is:  %zu", sizeof(name1));
    printf("\nSize of the number for int value for num1 is:  %zu ", sizeof(num1));
    printf("\nSize of the number for double value for num2 is: %zu ", sizeof(num2));
    printf("\nSize of the number for float value for num3 is: %zu ", sizeof(num3));
    // printf("Size of the number for int value for max is%zu: ", sizeof(name1));

    return 0;
}