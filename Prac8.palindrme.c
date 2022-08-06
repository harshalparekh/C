//Write a program using functions to find reverse of a number and decide whether it is a palindrome or not. Develop two function getnum() and reverse() with proper prototypes.

#include<stdio.h>
#include<conio.h>
int getnum (int);
int reverse (int);
void
main ()
{
  int no = 0, res;
  clrscr ();
  no = getnum (no);
  res = reverse (no);
  if (no == res)
    printf ("\n%d is a palindrome", res);
  else
    printf ("\n%d is not palindrome", res);
  getch ();
}

int
getnum (int no)
{
  printf ("\nEnter any number:");
  scanf ("%d", &no);
  return no;
}

int
reverse (int a)
{
  int d, rev = 0;
  while (a != 0)
    {
      d = a % 10;
      rev = rev * 10 + d;
      a = a / 10;
    }
  return rev;
}
