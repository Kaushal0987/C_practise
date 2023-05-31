#include<stdio.h>
#include<math.h>
int main()
{
 int x, y;
 float cal;
 printf("Enter the value of x: ");
 scanf("%d", &x);
 printf("Enter the value of y: ");
 scanf("%d", &y);

 cal = 5 * x * sqrt(y^2+5);

 printf("result: %f", cal);
 return 0;
}