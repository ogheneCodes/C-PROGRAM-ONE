#include<stdio.h>

/*using ternery comdition is same as uising if statement
but it is much more shourt

*/

int main(){
   int number;
    printf("Enter a random number:  ");
    scanf("%d", &number);
    (number > 0) ? printf("Number is %d and it is greater than 0", number) : printf("Number is %d and it is less than 1", number);
    
    return 0;
}