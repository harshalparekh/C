#include<conio.h>
#include<stdio.h>
void main()
{
    char name[25], sub1[25], sub2[25], sub3[25]; 
    int n,total, marks1, marks2, marks3;
    float per;
    printf("Enter a name: ");
    scanf("%s", &name);
    printf("Enter roll number: ");
    scanf("%d", &n);

    printf("Enter subject 1: ");
    scanf("%s", &sub1); 
    printf("Enter marks: ");
    scanf("%d", &marks1);
    
    printf("Enter subject 2: ");
    scanf("%s", &sub2);
    printf("Enter marks: ");
    scanf("%d", &marks2);
    
    printf("Enter subject 3: ");
    scanf("%s", &sub3);
    printf("Enter marks: ");
    scanf("%d", &marks3);
    
    total=(marks1+marks2+marks3);
    per=(marks1+marks2+marks3)/3;
    
    printf("\nEntered name:%s\n", name);
    printf("Entered roll no:%d\n", n);
    
    printf("\nSubject 1:%s\t", sub1);
    printf("marks for subject 1:%d\n",marks1);
    
    printf("Subject 2:%s\t", sub2);
    printf("marks for subject 2:%d\n",marks2);
    
    printf("Subject 3:%s\t", sub3);
    printf("marks for subject 3:%d\n",marks3);
    
    printf("\nTotal marks:%d\n",total);
    printf("Percentage:%f\n",per);
    
    if (per>=75 && per<=100)
    {
        printf("\nyour grade is 'O'");
    }
    else if (per>=60 && per<75)
    {
       printf("\nyour grade is'A'"); 
    }
    else if(per>=50 && per<60)
    {
       printf("\nyour grade is'B'"); 
    }
    else if(per>=40 && per<50)
    {
        printf("\nyour grade is'C'");
    }
    else if(per>=0 && per<40)
    {
        printf("\nyour grade is'D'");
    }
    
    getch();
}