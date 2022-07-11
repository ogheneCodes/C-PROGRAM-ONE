#include <stdio.h>
/*
The preprocessor defined operator is used in 
constant expressions to determine if an identifier is 
defined using #define. If the specified identifier is defined, 
the value is true (non-zero). If the symbol is not defined,
the value is false (zero). 

*/


#if !defined (MESSAGE)
   #define MESSAGE "You wish!"
#endif

int main(void) {
   printf("Here is the message: %s\n", MESSAGE);  
   return 0;
}