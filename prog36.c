#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
switch(a,b)
{
case 1:printf("addition:%d",a+b);
break;
case 2:printf("subtraction:%d",a-b);
break;
case 3:printf("multiply:%d",a*b);
break;
case 4:printf("division:%d",a/b);
break;
case 5:printf("reminder:%d",a%b);
break;
deafult:printf("give a valid number");
return 0;
}
}
