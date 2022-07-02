#include<stdio.h>
#include<stdlib.h>

/* create a program to check
whether a number is odd or even
*/
int main(){
    int numbers;

    printf("Enter a Number: ");
    scanf("%d", &numbers);
    
    (numbers % 2 == 0) ? printf("This is %d and it is an Even Number", numbers) : printf("This %d and it is a Odd Number", numbers);

    return 0;

}