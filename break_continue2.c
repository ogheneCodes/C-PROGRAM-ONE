#include<stdio.h>

/*
write a program that takes an input from a user and prints it if the value is a negative odd number
if the input value is positive, end the loop with a message, "POSITIVE VALUE"
if the input value is a negative even, skip the value with message "NEGATIVE EVEN"
*/

int main(){

    while (1)
    {
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number < 0 && number % 2){
            printf("%d", number);
            continue;
        }
        if(number >= 0){
            printf("POSITIVE VALUE");
            break;
        }
        if((number < 0)!= 0){
            printf("NEGATIVE EVEN");
            continue;
        }
        return 0;
    }
    
}