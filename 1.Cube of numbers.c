/*program inc to display cube of the
 number upto a give number of times*/
#include<stdio.h>
int main ()
{
int k;
printf("number and cubes of 5 numbers\n");

for (k=1;k<=5;k++)
{
printf("The numbers is :%d and the cube is:%d\n",k,(k*k*k));
}
return 0;
}