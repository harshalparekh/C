// factorial of a number by recurssion method ...,


#include<stdio.h>
#include<conio.h>
int x;
int fact(int n)
{
	if(n==0)
	return 1;
	else
	x=n-1;
	return n*fact(x);
}
	void main()
	{

		printf("Enter Number :\t");
		scanf("%d",&x);
		printf("\nFactorial    :\t%d",fact(x));
		getch();
}
