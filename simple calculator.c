#include <stdio.h>
int main()
{
int a,b;
char oper;
printf("Enter the number1: ");
scanf("%d",&a);
printf("Enter the number2: ");
scanf("%d",&b);
printf("Enter the operator");
scanf("%s",&oper);
if(oper=='+')
{
printf("The sum is %d\n",a+b);
}
else if(oper== '-'){
printf("The difference is %d\n",a-b);
}
else if(oper== '*'){
printf("The product is %d\n",a*b);
}
else if(oper== '/'){
if(b!=0)
{
printf("The division is %d\n",a/b);
}
else{
printf("The division by zero is not possible.\n");
}
else
{
printf("Invalid operator.\n");
}
}
}