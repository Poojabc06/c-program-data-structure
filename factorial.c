#include <stdio.h>
int main()
{
int i=1,n,factorial=1;
printf("Enter a positive number: ");
scanf("%d",&n);
do{
factorial*=i;
i++;
}while(i<=n);
printf("factorial of %d is %d",n,factorial);
}