#include<stdio.h>
int main(){
int n,revnum=0,remnum,num;
printf("Enter the number: ");
scanf("%d",&n);
num=n;
while(n!=0){
remnum=n%10;
revnum=revnum*10+remnum;
n/=10;}
if(num==remnum)
printf("%d is palindrome",num);
else
printf("%d is not palindrome",num);
return 0;
}