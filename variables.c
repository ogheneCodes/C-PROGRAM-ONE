#include <stdio.h>

int main()
{
    // variables in C
    char name[10] = "maxwell";
    int number = 22;
    char letter = 'A';
    double decimal = 10.1;
    float decimal2 = 10.2;

    printf("This is a variable string of text named using char for:  %s", name);
    printf("\n This is a variable type of number using int for: %d", number);
    printf("\n This is a variable letter of a single letter using char for: %c", letter);
    printf("\n This is a variable type of decimal numbers  using double for: %lf", decimal);
    printf("\n This is a variable type of float number using float for: %f", decimal2);
    printf("\n");
    printf("\n");
    /*changing a code */
    letter = 'B';
    number = 45;
    int name[6] = 'oghene';
    printf("This is a variable string of text named using char for:  %c", letter);
    printf("\n This is a variable type of number using int for: %d", number);
    printf("\n");
    printf("This is a variable string of text named using char for:  %s", name);
    printf("\n");

    return (0);
}