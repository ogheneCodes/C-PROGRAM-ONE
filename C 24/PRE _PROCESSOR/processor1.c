#include <stdio.h>
/*
The C Preprocessor is not a part of the compiler,
but is a separate step in the compilation process.
 In simple terms, a C Preprocessor is just a text
 substitution tool and it instructs the compiler to do
 required pre-processing before the actual compilation.
*/

int main()
{

    printf("File :%s\n", __FILE__);
    printf("Date :%s\n", __DATE__);
    printf("Time :%s\n", __TIME__);
    printf("Line :%d\n", __LINE__);
    printf("ANSI :%d\n", __STDC__);

    return 0;
}