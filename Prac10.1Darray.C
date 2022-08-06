//wap menu driven to perform create,sum,max,min,search option on one dimensional array 
#include<stdio.h>
#include<conio.h>
void main()
{
//variable section
int ch,sum=0,found=0,se,i,j,n,data[20],temp,big,small;
//input section
printf("Enter Number of Element:\t");
scanf("%d",&n);
printf("\nEnter Numbers\n");
for(i=1;i<=n;i++)
{
scanf("%d",&data[i]);
}
printf("\nEnter Number of elements of array are:\n");
for(i=1;i<=n;i++)
{
printf("%d",data[i]);
}
printf("________________\n");
printf("1.Sum\n");
printf("2.Maximum\n");
printf("3.Minimum\n");
printf("4.Search\n");
printf("5.Sort\n");
printf("________________\n");
printf("Enter your choice\n");
scanf("%d",&ch);

//processing
switch(ch)
{
case 1:for(i=1;i<=n;i++)
       {
       sum=sum+data[i];
       }
       printf("\nSum of all the elements:\t\t%d\n",sum);
       break;
case 2:big=data[1];
       for(i=2;i<=n;i++)
       {
	if(big<data[i])
	{
	big=(data[i]);
	}
       }
       printf("\nBiggest element in the list:\t%d\n",big);
       break;
case 3:small=data[1];
       for(i=2;i<=n;i++)
       {
	if(small>data[i])
	{
	small=(data[i]);
	}
       }
       printf("\nSmallest element in the list:\t%d\n",small);
       break;
case 4:printf("\nEnter Element which you want to search:\t");
       scanf("%d",&se);
       for(i=1;i<=n;i++)
       {
	if(se==data[i])
	{
	found=1;
	break;
	}
       }
       if(found==1)
       {
       printf("Search is successful\n");
       printf("Place of %d is %d\n",se,i);
       }
	 else
       printf("Search is unsuccessful\n");
     
	//selection sort	

case 5:for(i=1;i<=n;i++)	
       {
	for(j=i+1;j<=n;j++)		
	{
	 if(data[i]>data[j])
	 {
	 temp=data[i];			
	 data[i]=data[j];		
	 data[j]=temp;			
	 }
	}
       }
       printf("\nElements of Array in sorted ascending order:\n");
       for(i=1;i<=n;i++)
       printf("%d\n",data[i]);
       break;
default:printf("Invalid\n");
}//end of switch

getch();
}
