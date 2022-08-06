#include<stdio.h>
int sum()
{
    int a,b;
    printf("Enter any two numbers:\n");
    scanf("%d%d", &a,&b);
    return a+b;
}
int main()
{
    int store=sum(10,20);
    printf("%d",store);
    return 0;
}