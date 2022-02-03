#include<stdio.h>
int main()
{
  auto int a=10;
  if (1==1).      // static instead of auto
  {
      auto int b=20;
      printf("%d\n",a);
      printf("%d\n",b);
  }
    return 0;
}