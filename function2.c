#include <stdio.h>

/*create a function that
taskes two numbers
performs the multiplication of two numbers
returns the result
*/

int takes()
{
    int number1;
    int number2;

    printf("Enter number1:  ");
    scanf("%d", &number1);

    printf("Enter number2:  ");
    scanf("%d", &number2);

    int result = number1 * number2;
    printf("%d",result);
}



int main()
{

takes();

return 0;

}
