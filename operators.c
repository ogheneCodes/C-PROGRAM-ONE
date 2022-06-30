#include <stdio.h>

// C operators
/* operators are used for mathematical decisions
Arithemetic operators in C include +, -, *, /, %, ++. --



*/

int main()
{
    int num1 = 2;
    int num2 = 5;
    int num3 = 8;
    double num4 = 10.00;
    double num5 = 12.22;
    double num6 = 15.22;
    float num7 = 12.00;
    float num8 = 10.22;
    float num9 = 50.22;

    // ADDITION
    int one = num1 + num2;
    double two = num4 + num5;
    float three = num7 + num9;

    // SUBSTRACTION
    int four = num1 - num2;
    double five = num4 - num5;
    float six = num7 - num9;
    // MULTIPLICATION
    int seven = num1 * num2;
    double eight = num4 * num5;
    float nine = num7 * num9;
    // DIVISION
    int ten = num1 / num2;
    double eleven = num4 / num5;
    float twelve = num7 / num9;
    // INCREEMENT
    int thirteen = num1++;
    double fourteen = num4++;
    float fifteen = num7++;
    // DECREEMENT
    int sixteen = num1--;
    double seventeen = num4--;
    float eighteen = num7--;

    // ADDITION
    printf("num1 + num2: %d", one);
    printf("\nnum4 + num5: %lf", two);
    printf("\nnum4 + num5: %.2lf", two); // to two decimal place
    printf("\nnum7 + num9: %.f", three);
    printf("\n");
    printf("\n");
    printf("\n");
    // SUBSTRATION
    printf("num1 - num2: %d", four);
    printf("\nnum4 - num5: %lf", five);
    printf("\nnum4 - num5: %.2lf", five); // to two decimal place
    printf("\nnum7 - num9: %.f", six);
    printf("\n");
    printf("\n");
    printf("\n");
    // MULTIPLICATION
    printf("num1 x num2: %d", seven);
    printf("\nnum4 x num5: %lf", eight);
    printf("\nnum4 x  num5: %.2lf", eight); // to two decimal place
    printf("\nnum7 x num9: %.f", nine);
    printf("\n");
    printf("\n");
    printf("\n");
    // DIVITION
    printf("num1 / num2: %d", ten);
    printf("\nnum4 / num5: %lf", eleven);
    printf("\nnum4 / num5: %.2lf", eleven); // to two decimal place
    printf("\nnum7 / num9: %.f", twelve);
    printf("\n");
    printf("\n");
    printf("\n");
    // INCREEMENT
    printf("num1++: %d", thirteen);
    printf("\nnum4++: %lf", fourteen);
    printf("\nnum4 ++: %.2lf", fourteen); // to two decimal place
    printf("\nnum7++: %.f", fifteen);
    printf("\n");
    printf("\n");
    printf("\n");
    // DECREMENT
     printf("num1--: %d", sixteen);
    printf("\nnum4--: %lf", seventeen);
    printf("\nnum4 --: %.2lf", seventeen); // to two decimal place
    printf("\nnum7--: %.f", eighteen);
    printf("\n");
    printf("\n");
    printf("\n");

    return 0;
}