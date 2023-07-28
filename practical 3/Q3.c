#include <stdio.h>
#include <stdlib.h>

int main()
{
    char empname[30];
    float bs,ns,inc;
    //input
    printf("enter the employee name");
    scanf("%s",&empname);
    printf("enter basic salary");
    scanf("%f",&bs);
    //process
    if(bs>=10000)
        inc=bs*0.15;
    else if(bs>=5000)
        inc=bs*0.10;
    else
        inc=bs*0.05;

    ns=bs+inc;
    //output
    printf("Employee Name %s \n",empname);
    printf("New Salary %.2f \n",ns);
}
