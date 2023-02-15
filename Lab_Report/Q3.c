/*A company pays its employee on hourly basis. If an employee works for 8 hours, he gets Rs.100/hour and Rs.120/hour for additional hours. Read the working hour from the user and calculate the total salary.*/
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