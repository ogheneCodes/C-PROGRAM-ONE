#include<stdio.h>

/*computing the sum of only 
odd number from 1 to 100
*/

int main(){
int num = 1;

for (int i = 1; i < 10; i = i+1)
{
    int num = num + i;
    printf("The Odd numbers are: %d\n", num);

}

return 0;
}