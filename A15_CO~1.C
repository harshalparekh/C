#include<stdio.h>
#include<conio.h>
#include<string.h>
struct info
{
char country[25];
char capital[25];
};
int main()
{
int ch,b,i,found=0;
char incountry[20],incapital[20];
struct info a[15]={{"France","Paris"},
		   {"India","Delhi"},
		   {"Iraq","Baghdad"},
		   {"Afghanistan","Kabul"},
		   {"Brazil","Barsilia"},
		   {"Japan","Tokyo"},
		 
		   {"China","Beijing"},
		   {"Egypt","Cairo"},
		   {"Russia","Moscow"},
		   {"Italy","Rome"},
		   {"Germany","Berlin"},
		   {"UK","London"},
		   {"Nepal","Kathmandu"},
		   {"Thailand","Bangkok"}};
clrscr();
printf("\n\tMenu\n");
printf("1.Display\n2.Country to Capital\n");
printf("3.Capital to country\n4.Exit\n");
do
{
printf("\nEnter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("____________________________________________\n");
       printf("Sr.No.\t Country \t\tCapital\n");
       printf("____________________________________________\n");
       for(i=0;i<=14;i++)
       printf(" %d\t %-10s\t\t%s\n",i+1,a[i].country,a[i].capital);
       printf("____________________________________________\n");
       break;
case 2: found=0;
	printf("\nEnter country name : ");
       scanf("%s",&incountry);
       for(i=0;i<=14;i++)
       {
       int n=strcmp(incountry,a[i].country);
	if(n==0)
	{
	found=1;
	break;
	}
       }
       if(found==1)
       {
       printf("\n\t   Search is successful\n");
       printf("_____________________________________________\n");
       printf("\tCountry\t\t\tCapital\n");
       printf("_____________________________________________\n");
       printf("\t%-10s\t\t%s\n",a[i].country,a[i].capital);
       }
       else
       printf("Search is unsuccessful\n");
       break;
case 3:found=0;
       printf("\nEnter Capital name : ");
       scanf("%s",&incapital);
       for(i=0;i<=14;i++)
       {
       int n=strcmp(incapital,a[i].capital);
	if(n==0)
	{
	found=1;
	break;
	}
       }
       if(found==1)
       {
       printf("\n\t   Search is successful\n");
       printf("_____________________________________________\n");
       printf("\tCapital\t\t\tCountry\n");
       printf("_____________________________________________\n");
       printf("\t%-10s\t\t%s\n",a[i].capital,a[i].country);
       }
       else
       printf("Search is unsuccessful\n");
       break;
case 4:break;
}
}
while(ch!=4);
getch();
return 0;
}

