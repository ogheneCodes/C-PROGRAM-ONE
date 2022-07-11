#include<stdio.h>
/*gets() and puts() Functions*/

int main(){
    int name[20];

    printf("Enter your name: ");
    gets( name );

    printf("your name is: ");
    puts( name );
    return 0;
}