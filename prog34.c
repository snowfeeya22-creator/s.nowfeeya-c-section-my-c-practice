#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
if(a>=90)
 printf("grade a");
else if(a<90&&a>=70)
 printf("grade b");
else if(a<70&&a>=50)
 printf("grade c");
else
 printf("grade d");
return 0;
}       
