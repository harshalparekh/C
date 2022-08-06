//assignment 2
//program to find smallest of three numbers using conditional operator
//written by Harshal Parekh.
#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,num3,small;
clrscr();
printf("Enter Three Numbers:\n");
scanf("%d%d%d",&num1,&num2,&num3);
 
small=num1<num2?num1:num2;
small=num3<small?num3:small;
 
printf("\nSmallest Number is: %d",small);

getch();
}