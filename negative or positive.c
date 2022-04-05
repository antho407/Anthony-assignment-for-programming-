/*a program to determine weather a number is positive or negative*/
#include<stdio.h>
int main ()
{
int num;
printf("enter the number", num);
scanf("%d",&num);
if(num>=0)
{
printf("%d  is positive\n", num);
}
else
printf("%d is negative\n", num);
return 0;
}