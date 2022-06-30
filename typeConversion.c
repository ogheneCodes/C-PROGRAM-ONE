#include<stdio.h>

/*
we have the implicit and explicit conversion
char is converted to int, int converted to double
*/

int main(){
int num1 = 5;
double num2 = 20.92;
float num3 = 22.11;
char letter = 'A';
int result1 = '8' + 12;
int result2 = 8 + 12;


// REMEBER THAT THIS ARE WRONG FORMAT SPECIFIER BEEN USED HERE
printf("num1 is int = 5, but now: double= %lf", num1);
printf("\nnum1 is int = 5, but now: float= %f", num1);
printf("\nnum2 is double = 20.92, but now: int= %d", num1);
printf("\nnum3 is float = 22.11, but now: int= %d", num1);
printf("\nletter is char = A, but now: double= %lf", num1);
printf("\n  \"8\"+ 12:  %d", result1);
printf("\n  8 + 12:  %d", result2);
printf("\n");
printf("\n");
printf("\n");
}