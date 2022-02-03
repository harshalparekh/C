#include<conio.h>
#include<stdio.h>
void main()
{
    int a,b,res,prod; //function declaration
  //  clrscr();
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    
    res=add(a,b);  //function calling
    printf("Addition: %d ", res);
    
    prod=mul(a,b);  //function calling
    printf("Product: %d", prod);
    getch();
}

int add(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}

int mul(int a, int b)
{
    int mul;
    mul=a*b;
    return mul;
}