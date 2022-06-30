#include<stdio.h>

/*User input in C
scanf is use for taking input from users
 and saving it in a variable that has no value
 scanf(%d, &name) 
 %d, %c, %f e.t.c or any other are the format specifial, telling the computer what data type it is expecting
 &name &date or other names represent the memory address
*/

int main()
{
    int num1;
    double num2;
    float num3;
    char name[20];
    char letter;
    // Collecting user input to attach to the variables

    printf("Write an Interger number:  ");
    scanf("%d", &num1); //use for intergers number
    printf("\nWrite a double number: ");
    scanf("%lf", &num2); //use for double number
    printf("\nWrite a float number: ");
    scanf("%f", &num3); //use for float  number
    printf("\nWrite a Sting / your name: ");
    scanf("%s", &name); //use for string to take arrays
    printf("\nWrite a Single letter number: ");
    scanf("%c", &letter); //use for single letter 

    printf("\n");
    printf("\n");
    printf("you inserted interger number of: %d", num1);
     printf("\n");
    printf("You entered Double number of: %f", num2);
     printf("\n");
    printf("You entered float Number of: %f", num3);
     printf("\n");
    printf("You entered a string or a name: %s", name);
     printf("\n");
    printf("You entered a single letter: %c", letter);
     printf("\n");


    return 0;
}