#include<stdio.h>
int main()
{
float salary,bonus,finalsalary;
printf(" enter the  salary:");
scanf("%f",&salary);
printf("enter your bonus percentage:" );
scanf("%f",&bonus);
printf("finalsalary=%f",salary+( salary*bonus)/100);
return  0;
}
