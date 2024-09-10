#include <stdio.h>
int main()
{
int a,b;
char oper;
printf("Enter the number1:");
scanf("%d",&a);
printf("Enter the number2:");
scanf("%d",&b);
printf("Enter the operator");
scanf(" %c",&oper);
switch(oper)
{
case '+':
printf("The sum is %d", a+b);
break;
case '-':
printf("The subtract is %d", a-b);
break;
case '*':
printf("The multiplication is %d", a*b);
break;
case '/':
if(b!=0){
printf("The division is %d",a/b);
}
else{
printf("division is not possible by zero");
}
break;
}
}
