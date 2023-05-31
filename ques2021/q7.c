#include<stdio.h>
int mul(int,int);
int main()
{
 int a, n=2, b;

 printf("number to be multiplied: ");
 scanf("%d", &a);

 for(n=1; n<=10; n++)
 {
  b = mul(a,n);
  printf("%d * %d = %d\n",a,n,b);
 }

 return 0;
}

int mul(int a , int n)
{
 return a*n;
}