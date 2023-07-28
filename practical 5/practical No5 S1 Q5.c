#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,r,reversenum,s;
   printf("Enter a number");
   scanf("%d",&num);
   s=num;

   do
   {
     r=num%10;
     reversenum=reversenum*10+r;
     num/=10;
   }while(num>0);

   printf("Reversed number:%d/n",reversenum);
}
