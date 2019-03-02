#include<stdio.h>
void main()
{
int number;
printf("Enter any number ");
scanf("%d",&number);
if(number<0)
{
number=(-1)*number;
printf("Absolute value is =%d",number);
}
else
printf("Allread positive value");
}

