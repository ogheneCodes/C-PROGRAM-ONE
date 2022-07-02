#include <stdio.h>
#include<stdlib.h>
/* A voting system
understand we can also have multiple if statment even without else. 

*/

int main()
{
    char name[10];
    int age;
    {
        printf("What is your name: ");
        scanf("%s", &name);
        printf("\n");
        printf("Whats is your Age: ");
        scanf("%d", &age);
        printf("\n");

        if(age < 18){
            printf("Hello %s, thank you for coming out but you are not eligible to vote becuase  you are %d years old", name, age);
        }else{
            printf("Hello %s, thank you for coming out to vote as you are eligible to vote since you are %d years old", name, age);
        }
          printf("\n");
        return 0;
    }
}
