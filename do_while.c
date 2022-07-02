#include<stdio.h>
/* The do while is similar to the swith, just that the switch comes later 
*/
int main () {

   /* local variable definition */
   int a = 10;

   /* do loop execution */
   do {
      printf("value of a: %d\n", a);
      a = a + 1;
   }while( a < 20 );
 
   return 0;
}