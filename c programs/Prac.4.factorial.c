#include<conio.h>
#include<math.h>
#include<stdio.h>
int main()
{
    int a,b,c;
    c=1;     //why c=1?
    printf("Enter any number: ");
    scanf("%d", &a);
    
    for(b=1;b<=a;b++)
    {
        c=c*b;
    }
    printf("Factorial:%d ", c);
    return 0;
    getch();
}    
    