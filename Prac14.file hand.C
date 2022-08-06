//Assignment 14
#include<stdio.h>
#include<conio.h>
int main()
{
FILE *f1,*f2;
char filename[25],c,data;
clrscr();
//create file for writting information
printf("\nInput: ");
f1=fopen("L1.txt","w");
while((data=getchar())!='\n')
putc(data,f1);
fclose(f1); //close file stream
//open file for reading
f1=fopen("L1.txt","r");
printf("\nEnter the filename to be copied on: ");
scanf("%s",&filename);
//open file in write mode
f2=fopen(filename,"w");
c=fgetc(f1);
//write information on the file
while(c!=EOF)
{
fputc(c,f2);
c=fgetc(f1);
}
printf("\nContents copied to %s",filename);
//close all files
fclose(f1);
fclose(f2);
getch();
return 0;
}




