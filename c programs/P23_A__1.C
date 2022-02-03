//make list of odd and even numbers
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[10],b[10],c[10],j=1,p=1;
clrscr();
printf("how many number \n");
scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
		if (a[i]%2==0)

			{
			b[j]=a[i];
			j++; //number of even
			}
			else
			{
			c[p]=a[i];
			p++;
			}
		}
	printf("List of  Elements are \n");
	for(i=1;i<=n;i++)
	printf("\t%d \n ",a[i]);
	printf("Even number of list of  Elements are \n");
	for(i=1;i<=j-1;i++)
	printf("\t%d  \n",b[i]);
	printf("Odd number of list of  Elements are \n");
	for(i=1;i<=p-1;i++)
	printf("\t%d  \n",c[i]);


getch();
}


