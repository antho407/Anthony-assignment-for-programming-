/*program inc to display cube of the
 number upto a give number of times*/
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