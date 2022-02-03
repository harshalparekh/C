//program to convert celcius to fahrenheit
#include<stdio.h>
void  main()
{

int c;
float f;
clrscr();
printf("Enter Fahrenheit  value\n");
scanf("%f",&f);
c=(f-32)*5/9;
printf("fahrenheit     celcius\n");
printf("%.3f               %d",f,c);

getch();
}
