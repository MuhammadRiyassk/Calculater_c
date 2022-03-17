

#include<stdio.h>
main()
{
int num1,num2,sum,sub,mul,ch;
float div;
printf("Enter your Choice\n");
printf("1.Addition \n2.Subtraction  \n3.Multiplication  \n4.Division\n");
scanf("%d",&ch);
printf("Enter two numbers :");
scanf("%d%d",&num1,&num2);
if(ch==1)
{
sum=num1+num2;
printf("Addition is :%d",sum);
}else if(ch==2)
{
sub=num1-num2;
printf("Subtraction is :%d",sub);
}else if(ch==3)
{
mul=num1*num2;
printf("Multiplication is :%d",mul);
}else if(ch==4)
{
div=num1/num2;
printf("Division is :%f",div);
}else
{
printf("Choice not valid !!!!!!!");
}
}
