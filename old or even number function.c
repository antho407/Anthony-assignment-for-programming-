/*c funtion to determine
 weather a number is old or even*/
#include<stdio.h>
int even(int number);
int odd(int number);
int main ()
{
int number;
printf("enter the number");
scanf("%d",&number);
if(number%2==0)
{
printf("number is even");
}
else
{
printf("number is old");
}
return 0;
}
int even(int number)
{

int even_number;
even_number=(number%2==0);
return even_number;
}
int odd(int number)
{
int odd_number;
odd_number=(number% 2!=0);
return odd_number;
}




    