//A7-   Write a menu driven program to convert Dollars to Rupees and Rupees to Dollar.
#include<stdio.h>
#include<conio.h>
void main()
{
	int s,rupees,dollars;
	int convert,note;
	clrscr();
	printf("Today Dollar Rate:\t");
	scanf("%d",&note);
	do
	{
printf("\n\n1.Convert Dollers to Rupees\n\n2.Convert Rupees to Doller");
printf("\n\n3.Exit\n\n\tSelect Your Options:\t");
		scanf("%d",&s);
		switch(s)
		{
		case 1:
			printf("\nEnter Currency in Dollers:\t");
			scanf("%d",&dollars);
			convert=dollars*note;
			printf("\nRupees=%d",convert);
			break;
		case 2:
			printf("\nEnter Currency in Rupees:\t");
			scanf("%d",&rupees);
			convert=rupees/note;
			printf("\n Dollers=%d",convert);
			break;
		case 3:
			break;
		default:
			printf("\nInvalid Option");
		}//end of switch

	}while(s!=3);
	getch();
}








