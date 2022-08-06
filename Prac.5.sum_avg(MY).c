#include<conio.h>
#include<stdio.h>
int main()
{
int num,sum=0,count, limit;  
float avg;

printf("Enter the value:\n");
scanf("%d", &limit);

printf("Enter the numbers: %d\n", limit);
for(count=1;count<=limit; count++)
{
    scanf("%d", &num);
    sum=sum+num;       //why both formulas on different phases?
}                       
avg=sum/limit;
printf("Sum= %d\n Average=%f\n", sum,avg);

    return 0;
    getch();

}