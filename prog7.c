#include<stdio.h>
int main()
{
 char a;
 scanf("%c",&a);
 printf("%c",a);
 char name [32];
 scanf("%[^\n]",name);
 printf("%s",name);
 return 0;
}

