#include<stdio.h>

/*using swicth statement
checking out the days of the week
*/

int main(){
    int number;
    printf("Enter a Number from 1 - 7:  ");
    scanf("%d", &number);

    switch (number)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
         printf("Monday");
        break;
    case 3:
         printf("Tuesay");
        break;
    case 4:
         printf("Wednesday");
        break;
    case 5:
         printf("Thursday");
        break;
    case 6:
         printf("Friday");
        break;
    case 7:
         printf("Saturday");
        break;
    
    default:
        printf("You Entered an Invalid number");
        break;
    }


    return 0;
}