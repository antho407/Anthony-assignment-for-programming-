//a program to determine weather a person is eligible to vote or not
#include<stdio.h>
int main ()
{
int age;
char nat[]="Kenyan";
  printf("enter the age:");
  scanf("%d",&age);
  printf("enter the nationality:");
  scanf("%s",&nat);
if((age>="18") && (nat =="kenyan"))
{
  printf("eligible to vote");
}
else
{
  printf("not eligible to vote");
}
return 0;
}