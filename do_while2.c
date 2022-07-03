#include <stdio.h>

/*
print the multiplication table for the given number. print
9 multiplication table into 12 places using the do_while loop
*/

int main()
{
    int number;
    int count = 1;

    printf("Please Enter the number you want to multiply:  ");
    scanf("%d", &number);
    do
    {
        int total = number * count;
        printf("%d X %d: %d\n", number, count, total);
        count = count + 1;
    } while (count < 13);
}