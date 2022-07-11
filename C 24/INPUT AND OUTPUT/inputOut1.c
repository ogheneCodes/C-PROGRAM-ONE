#include<stdint.h>

/*
This is used for single character
*/

int main()
{
    int c;
    printf("Please type a Letter:  ");
    c = getchar( );

    printf("You typed:  %c\n", c);
    putchar( c );

    return 0;
}