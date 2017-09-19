#include<stdio.h>

int main()
{
  int number;
  scanf("%d", &number);

  (number == 2 || number %2 ) ? puts("NO") : puts("YES");
  return 0;
}