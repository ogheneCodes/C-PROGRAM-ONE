#include<stdio.h>



/*a program that prints when a number is nagative
 and when a number is postive
and when a umber is 0*/

int main(){
    double number;

    printf("Enter a number of choice:  ");
    scanf("%lf", &number);  //ensure the number will be in 2 decimal
    // printf("you are: %lf", number);
    if(number > 0){
        printf("Number is %f and it is a positive number", number);
    }else if(number == 0){
        printf("Number is %f and it is a 0 number", number);
    }else{
        printf("Number is %f and it is a nagative number", number);
    }

    return 0;
}