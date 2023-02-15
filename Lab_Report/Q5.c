/*Program to ask user 5 subjects marks and calculate total, percentage, result and Grade.*/
#include<stdio.h>
#include<math.h>
int main()
{
 float m, e, c, mi, a;
 float total, percentage;

 printf("enter marks in math: ");
 scanf("%f", &m);
 printf("enter marks in english: ");
 scanf("%f", &e);
 printf("enter marks in c programming: ");
 scanf("%f", &c);
 printf("enter marks in microprocessor: ");
 scanf("%f", &mi);
 printf("enter marks in account: ");
 scanf("%f", &a);

 total = m + e + c + mi + a;
 printf("total marks = %.2f\n", total);

 percentage = total / 5;
 printf("percentage = %.2F\n", percentage);

 if(m>=35 && e>=35 && c>=35 && mi>=35 && a>=35)
  {
   printf("result: pass\n");
  }
 else
  {
   printf("result: fail\n");
  }

 
 if(percentage>=90 && percentage<=100)
  {
   printf("grade: A\n");
  }

 else if(percentage>=75 && percentage<=89)
  {
   printf("grade: B\n");
  }

 else if(percentage>=60 && percentage<=74)
  {
   printf("grade: C\n");
  }

 else if(percentage>=35 && percentage<=59)
  {
   printf("grade: D\n");
  }

 else
  {
   printf("grade: F\n");
  }
}