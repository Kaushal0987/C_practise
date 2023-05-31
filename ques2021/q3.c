#include<stdio.h>
int sum(int n)
{
 if(n==0)
 {
  return 0;
 }
 else
 {
  return n + sum(n-1);
 }
}

int main()
{
 int n = 10;
 printf("sum of natural numbers upto N : %d", sum(n));
 return 0;
}