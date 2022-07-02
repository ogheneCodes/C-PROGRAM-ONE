#include<stdio.h>

/*
using while loop for arithemetic
*/

int main(){
    int number;
    printf("Enter a Number you want to calculate: ");
    scanf("%d", &number);

    int count = 1;
   
    while (count < 13)
    {
        int total = count * number;
        printf("%d X %d  :  %d\n", number, count, total);
        count = count + 1;

    }
    return 0;

}