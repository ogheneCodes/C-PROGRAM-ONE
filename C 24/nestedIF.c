#include <stdio.h>

/*
if statement enables a program to make one
decision. In many cases, a program has to
make a series of related decisions. For this
purpose, you can use nested if statements.
*/

int main()
{
    int i;
    for (i = -5; i <= 5; i++)
    {
        if (i > 0)
            if (i % 2 == 0)
                printf("%d is an even number.\n", i);
            else
                printf("%d is an odd number.\n", i);
        else if (i == 0)
            printf("The number is zero.\n");
        else
            printf("Negative number: %d\n", i);
    }
    return 0;
}