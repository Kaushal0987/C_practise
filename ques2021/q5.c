#include<stdio.h>
#include<math.h>
int main()
{
 int i, n;
 double x, t, sum = 1.0;

 printf("enter the number of series: ");
 scanf("%d", &n);

 printf("enter the value of x: ");
 scanf("%lf", &x);

 for(i=1; i<=n; i++)
 {
  t = pow(x,i)/tgamma(i+1);
  sum += t;
 }

 printf("sum of the series: %lf", sum);
 return 0;
}
