#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;

    printf("Enter two integers:");
    scanf("%d%d",&num1,&num2);

    if (num2|=0 && num1%num2==0)
    {
        printf("%d is a multiple of %d.\n",num1,num2);
    }
    else
    {
        printf("%d is a not multiple of %d.\n",num1,num2);
    }
}

