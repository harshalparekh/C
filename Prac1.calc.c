#include<conio.h>
#include<stdio.h>
void main()
{
    int a,b,add,sub,mul,div,mod;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b); 
    
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    
    printf("\nAddition of %d and %d is: %d", a,b,add);
    printf("\nSubtraction of %d and %d is: %d", a,b,sub);
    printf("\nMultiplication of %d and %d is: %d", a,b,mul);
    printf("\nDivision of %d and %d is: %d", a,b,div);
    printf("\nMod of %d and %d is: %d", a,b,mod);
    
    getch();
}