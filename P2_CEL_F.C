//program to convert celcius to fahrenheit
#include<stdio.h>
void  main()
{

int c;
float f;
clrscr();
printf("Enter celcius value\n");
scanf("%d",&c);
f=(float)9/5*c+32;
printf("celcius      fahrenheit\n");
printf("%d               %.3f",c,f);

getch();
}
