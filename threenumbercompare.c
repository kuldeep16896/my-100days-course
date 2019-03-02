#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter value of a,b and c:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&b>c)
printf("number a");

else if(b>a&&a>c)
printf("number b");
else
printf("number c");
}

