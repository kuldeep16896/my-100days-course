#include<stdio.h>
void main()
{
int i=1,x;
while(i<=5)
{
printf("Enter a number:");
scanf("%d",&x);
if(x>0)
break;
i++;
}
i==6 ? printf("ends normally"):printf("applied break");
}
