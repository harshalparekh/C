//assignment 2
//program to find greatest of three numbers
//written by Harshal Parekh.
#include<stdio.h>
#include<conio.h>

//main function
void main ()
{
//variable section
  int x, y, z, big;

//clear screen
 clrscr();

//input section
  printf ("Enter First Value: ");
  scanf ("%d", &x);
  printf ("Enter Second Value: ");
  scanf ("%d", &y);
  printf ("Enter Third Number: ");
  scanf ("%d", &z);

//processing section...
  if (x > y)
    big = x;
  else
    big = y;
  if (z > big)
    big = z;

//output section
  printf ("\n Largest of three numbers is: %d \n", big);


  getch ();
}
