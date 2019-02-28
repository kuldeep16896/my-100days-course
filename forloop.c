#include<stdio.h>
void main()
{
int c,r,sum;
printf("Enter the value of r and c:");
scanf("%d%d",&r,&c);
for(r=1;r<=2;r++)
{
for(c=1;c<=2;c++)
 {
sum=r+c;
printf("r=%dc=%dSsum=%d\n",r,c,sum);
}
}
}
