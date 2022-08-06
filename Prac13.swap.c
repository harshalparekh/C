#include<stdio.h>
#include<conio.h>
void swap (int *, int *);
void main ()
{
  int a, b;
 // clrscr ();
  printf ("\nEnter a and b:");
  scanf ("%d %d", &a, &b);
  printf ("\nBefore swapping\n");
  printf ("a=%d\nb=%d\n", a, b);
  swap (&a, &b);
  printf ("\nAfter swapping\n");
  printf ("a=%d\nb=%d", a, b);
  getch ();
}

void swap (int *a1, int *b1)
{
  int temp;
  temp = *a1;
  *a1 = *b1;
  *b1 = temp;
}
