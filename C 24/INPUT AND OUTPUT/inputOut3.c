#include <stdio.h>

/*
The int printf(const char *format, ...) 
function writes the output to the standard output stream 
stdout and produces the output according to the format provided.

 Note: scanf() expects input in the same format as you provided %s and %d, 
 which means you have to provide valid inputs like "string integer". 
 If you provide "string string" or "integer integer", 
 then it will be assumed as wrong input.
*/
int main()
{

    char str[100];
    int i;

    printf("Enter a value :");
    scanf("%s %d", str, &i);

    printf("\nYou entered: %s %d ", str, i);

    return 0;
}