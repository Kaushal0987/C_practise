/*find sum of series: x + x^2/2 + x^3/3 + ....... + nth terms*/
#include<stdio.h>
#include<math.h>
int main()
{
 int x, i, n, sum=0;
 printf("enter the value of n: ");
 scanf("%d", &n);
 printf("enter value of x: ");
 scanf("%d", &x);

 for (i=1; i<=n; i++)
 {
  sum = sum +(pow(x,i)/i);
 }
 printf("sum = %d", sum);
}