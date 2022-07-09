#include<stdio.h>
/* using a switch statment to create a program that will find
the moonth based on the number inputed
*/

int main(){
    int months;
    printf("Enter a number from 1 - 12 to get a month:   ");
    scanf("%d", &months);
   // months = getchar();

    switch (months)
    {
    case 1:
        printf("The month you picked is January");
        break;
     case 2:
        printf("The month you picked is Febuary");
        break;
     case 3:
        printf("The month you picked is March");
        break;
     case 4:
        printf("The month you picked is April");
        break;
     case 5:
        printf("The month you picked is May");
        break;
    case 6:
        printf("The month you picked is June");
        break;
     case 7:
        printf("The month you picked is July");
        break;
     case 8:
        printf("The month you picked is August");
        break;
     case 9:
        printf("The month you picked is September");
        break;
     case 10:
        printf("The month you picked is October");
        break;
    case 11:
        printf("The month you picked is November");
        break;
     case 12:
        printf("The month you picked is December");
        break;
    default:
        printf("please pick from 1 - 12");
        break;
    }
}