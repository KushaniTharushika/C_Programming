#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base,exp,result=1;

    printf("enter the base:");
    scanf("%d",&base);

    printf("enter the exponent:");
    scanf("%d",&exp);

    for (int i=0;i<exp;i++)
    {
        result*=base;
    }
    printf("The power- %d",result);

}
