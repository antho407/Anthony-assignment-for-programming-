/*program to find sum of ten
 natural numbers */
#include<stdio.h>
int main ()
{
int k;
int sum;
sum=0;

printf("the first 10 natural numbers are:\n");
for(k=1;k<=10;k++)
{
printf(" %d\n",k);
sum=sum+k;
}
printf(" Their total sum is %d",sum);
return 0;
}