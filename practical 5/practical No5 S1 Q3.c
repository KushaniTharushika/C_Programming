#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number;
    int Factor= 1;
    int i;

    printf("Enter a number:");
    scanf("%d",&number);


    for (i=number;i>0;i--)
        {
        Factor*= i;
        }


    printf("Factorial of %d is %d\n", number,Factor);


}

