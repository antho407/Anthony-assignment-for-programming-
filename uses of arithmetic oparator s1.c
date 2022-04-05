//a program to  demonstrate usage of arthmetric operations (+,-,*,/,%)
#include<stdio.h>
int main ()
{
double num1;
double num2;
char oparator;
printf("enter first number");
scanf("%lf",&num1);
printf("enter operator");
scanf(" %c",& oparator);
printf("enter second number");
scanf("%lf",&num2);
if(oparator=='+'){
printf("%f",num1+num2);
}
else if(oparator=='-')
{
printf("%f",num1-num2);
}
else if(oparator=='*')
{
printf("%f",num1*num2);
}
else if(oparator=='/')
{
printf("%f",num1/num2);
}
else {
printf("invalid oparator");
}
return 0;
}
