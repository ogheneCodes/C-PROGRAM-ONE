#include <stdio.h>

/*It is always a good practice
to assign a NULL value to a pointer
variable in case you do not have an exact address to be assigned.
This is done at the time of variable declaration.
A pointer that is assigned NULL is called a null pointer.

*/

int main()
{

    int *num1 = NULL;
    double *num2;
    float *num3 = NULL;
    char *letter = NULL;
    char *name[10];
    int *ptr;

    printf("The Value of *num1 variable is: %x\n", num1);
    printf("The Value of *num2 variable is: %x\n", num2);
    printf("The Value of *num3 variable is: %x\n", &num3);
    printf("The Value of *letter variable is: %x\n", &letter);
    printf("The Value of *name variable is: %x\n", &name);
     printf("The Value of *ptr variable is: %x\n", &ptr);

    return 0;
}