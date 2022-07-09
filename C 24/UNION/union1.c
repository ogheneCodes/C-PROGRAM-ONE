#include <stdio.h>
#include <string.h>

/*Accessing Union Members
NOTE: To access any member of a union,
we use the member access operator (.).
The member access operator is coded as
a period between the union variable name and
the union member that we wish to access.

*/

union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{

/*
use one variable at a time which is the main purpose of having unions
so that the values do not get corrupted
*/
    union Data data;

    data.i = 10;
    printf("data.i : %d\n", data.i);

    data.f = 220.5;
    printf("data.f : %f\n", data.f);

    strcpy(data.str, "C Programming");
    printf("data.str : %s\n", data.str);



    // printf("data.i : %d\n", data.i);
    // printf("data.f : %f\n", data.f);
    // printf("data.str : %s\n", data.str);

    return 0;
}