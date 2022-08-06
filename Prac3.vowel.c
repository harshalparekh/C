//program to check whether a character is a vowel or not
//using toupper() function
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char ch;
clrscr();
printf("Enter any Character (A-Z or a-z): ");
scanf("%c",&ch);
ch = toupper(ch);
switch(ch)
{
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
printf("%c is vowel",ch);
break;
 
default:
printf("%c is Consonant",ch);
 
} //end of switch
getch();
}