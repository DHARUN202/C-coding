#include <stdio.h>
#include <conio.h>
int mul(int x, int y); // fn prototype

int main()
{
  int x, y, result;
  printf("Input Two Numbers to Multiplied: ");
  scanf("%d", &x);
  scanf("%d", &y);
  result = mul(x, y); // calling fn
  printf("The product of our two numbers %d\n", result);
  getch();
}

int mul(int x, int y) // called fn
{
  int result;
  result = x * y;
  return result;
}
