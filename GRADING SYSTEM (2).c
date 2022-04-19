/*grading system
ask the user to enter the marks calculate and print avarage score calculate the grade*/
#include<stdio.h>
int main()
{
int phy,chem,bio;
int sum,avarage;

printf("enter the marks of phy:");
scanf("%d",&phy);
printf("enter the marks of chem:");
scanf("%d",&chem);
printf("enter the marks of bio:");
scanf("%d",&bio);
avarage=(phy+chem+bio)/3;
printf("avarage is%d\n",avarage);
if(avarage<0&avarage>=100)
{
printf("impossible");
}
else if(avarage>=70&&avarage<=99)
{
printf("Grade A");
}
else if(avarage>=60&&avarage<=69)
{
printf("Grade B");
}
else if(avarage>=50&&avarage<=59)
{
printf("Grade C");
}
else if(avarage>=40&&avarage<=49)
{
printf("Grade D");
}
else if(avarage<=39&&avarage>=0)
{
printf("FAILED");
}
else
{
printf("INVALID SCORES");
}
return 0;
}