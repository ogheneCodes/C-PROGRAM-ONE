#include<stdint.h>
#include<string.h>

/*
In programming terminology, 
a bit field is a data structure 
that allows the programmer to allocate memory 
to structures and unions in bits in order to utilize computer memory 
in an efficient manner.
*/

struct {
   unsigned int num1 : 3;
   unsigned int num2 : 3;
   unsigned int num3 : 3;
} Num;

int main( ) {

   Num.num1 = 4;
   printf( "Sizeof( Age ) : %d\n", sizeof(Num) );
   printf( "Num.num1 : %d\n", Num.num1 );

   Num.num2 = 5;
   printf( "Num.num2 : %d\n", Num.num2 );

   Num.num3 = 6;
   printf( "Num.num3 : %d\n", Num.num3 );

   return 0;
}