#include<stdio.h>
void fun ()
{
  int a = 10;
  static int b = 10;
  printf ("%d %d\n", a, b);
  ++a, ++b;
}

int main ()
{
  fun ();
  fun ();
  fun ();
  fun ();
  fun ();

return 0;
}
