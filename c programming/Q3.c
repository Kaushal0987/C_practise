#include<stdio.h>
int main()
{
 float h, a, b, i, hs;
 a = 100;
 b = 120;
 printf("hours worked: ");
 scanf("%f", &h);

 if (h<=8)
 {
  hs = h * a;
  printf("total salary: %.2f", hs);
 }

 else if (h>=8)
 {
  hs = 8 * a;
  i = h - 8;
  hs = hs + (i * b);
  printf("total salary: %.2f", hs);
 }
}