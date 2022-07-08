#include <stdbool.h>

/*
TASK ONE
Write a program that initializes the integer variable x with 1 and outputs results
with the following two statements:
printf(“x++ produces:
%d\n”, x++);
printf(“Now x contains: %d\n”, x);
*/

int firsts()
{
    int x = 1;
    printf("x++ produces: %d\n", x++);
    printf("Now x contains: %d\n", x);
    printf("++xx contains: %d\n", ++x);
    // printf(“x++ produces:%d\n”, x++);

    return 0;
}

/*
TASK TWO
The following program is supposed to compare the two variables, x and y , for
equality. What’s wrong with the program? (Hint: Run the program to see what it
prints out.)
#include <stdio.h>
{
int x, y;
x = y = 0;
printf(“The comparison result is: %d\n”,x=y);
return 0;
}
x = y);
*/

int second()
{
    int x, y;
    x = y = 0;
    printf("The comparison result is: %d\n", x + y);
    return 0;
}


int main()
{
    firsts();
    second();
}