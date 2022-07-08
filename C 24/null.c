#include <stdio.h>

/*
The C language allows you to use the comma operator to combine multiple expressions
into the three parts of the for statement.
*/

int main()
{
    int i, j;
    for (i = 0, j = 8; i < 8; i++, j--)
        printf("%d + %d = %d\n", i, j, i + j);
    return 0;
}