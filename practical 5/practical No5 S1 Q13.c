#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10];
	int i;
        printf("enter 10 integers:\n");
        for(i=0;i<10;i++)
        {
            scanf("%d",&array[i]);
        }
        printf("The array you entered is:\n");

        for(i=0;i<10;i++)
        {
            printf("%d ",array[i]);
        }

}
