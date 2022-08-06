//program to find factorial of a number
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,prod=1;
clrscr();
printf("Enter Any Number : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
prod=prod*i;
printf("\nFactorial of %d is %d",n,prod);
getch();
}