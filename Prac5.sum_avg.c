// Assignment 5
//Write a program to find sum and average of n numbers
//Declare average as float and other variable as integers.
#include<stdio.h>
#include<conio.h>
void main()
{
	//variable section
	int i=1,n,num,sum=0;
	float avg;
	
	
	//input section
	printf("How many number do you want to Enter:\t");
	scanf("%d",&n);
	
	//processing section	
	while(i<=n)    
	{
		printf("Enter Any Number:\t");
		scanf("%d",&num); 
		sum=sum+num;
		i++; 
	}
	//end of while loop
	
	avg= sum/n;
	printf("\nTotal:%d",sum);
	printf("\nAverage:%.2f",avg);
	getch();
}
