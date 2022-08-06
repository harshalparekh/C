#include<conio.h>
#include<stdio.h>
int main()
{
   int a;
   char sun[10],mon[10],tue[10],wed[10],thu[10],fri[10],sat[10];
   printf("Enter a number: \n Enter 1 for Monday, 2 for Tuesday, 3 for Wednesday,\n 4 for Thursday, 5 for Friday, 6 for Saturday and 7 for Sunday.: ");
   scanf("%d",&a);
   
   if(a==1)
   {
       printf("\nMonday");
   }
   else if(a==2)
   {
       printf("\nTuesday");
   }
        if(a==3)
   {
       printf("\nWednesday");
   }
   else if(a==4)
   {
       printf("\nThursday");
   }
        if(a==5)
   {
       printf("\nFriday");
   }
   else if(a==6)
   {
       printf("\nSaturday");
   }
   else if(a==7)
   {
       printf("\nSunday");
   }
  return 0;
  getch();
  }

