#include<stdio.h>
int main()
{
 int a=2;
 int *p=&a;

 *p=4;

 printf("%d", a);
}