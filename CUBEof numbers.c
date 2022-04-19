/*program inc to display cube of the
 number upto a give number of times*/
#include<stdio.h>
int main ()
{
int k,n;
printf("input number of terms(n)");
scanf("%d",&n);
for (k=1;k<=n;k++)
{
printf("The numbers is :%d and the cube is:%d\n",k,(k*k*k));
}
return 0;
}