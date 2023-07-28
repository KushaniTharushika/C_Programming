#include <stdio.h>
#include <stdlib.h>

int main()
{
 int no1,no2;
 printf("Enter First Number");
 scanf("%d",&no1);
 printf("Enter Second Number");
 scanf("%d",&no2);

 if(no1<no2)
    printf("The highest number is %d",no2);
 else
    printf("The highest number is %d",no1);

}
