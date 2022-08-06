#include<conio.h>
#include<stdio.h>
void main()
{
    int num;
    char uc;
    printf("Do you want to check for odd/even number? (Y=yes,N=no)");
    scanf("%s",&uc);
    while(uc=='Y')
    {
        printf("\nEnter number: ");
        scanf("%d",&num);
        printf("Entered number= %d",num);
        if(num%2==0)
        {
            printf("\nNumber is even");
        }
        else
        {
            printf("Number is odd");
        }
        fflush(stdin);
        printf("Do you want to check for odd/even number? (Y=yes,N=no)");
    scanf("%s",&uc);
    }
    getch();
}