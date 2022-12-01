#include<stdio.h>
#include<math.h>
int main()
{
 int sum=0, i, n, a=0;
 printf("value of n: ");
 scanf("%d", &n);

 printf("series: ");
 for(i=0; i<=n; i++)
 {
  a+=pow(2,i);
  printf(" %d", a);
  sum=sum+a;
 }

 printf("\nsum: %d", sum);
}