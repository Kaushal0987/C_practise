#include<stdio.h>
#include<stdio.h>
int main()
{
 int num, num2, num3, num4, rev=0, rem, rem2=0, count=0, sum=0, choice;

 printf("Press 1 to reverse any number\n");
 printf("Press 2 to count the number of digits\n");
 printf("Press 3 to sum of num\n");
 printf("Press 4 to find if the num is even or odd\n");
 printf("Press 5 to exit\n");
 scanf("%d", &choice);

 switch (choice)
 {
  case 1:
  printf("Enter the num:\n");
  scanf("%d", &num);

  while(num!=0)
  {
   rem = num%10;
   rev = rev*10 + rem;
   num = num/10;
  }
  printf("rev = %d", rev);
  break;

  case 2:
  printf("Enter the num2:\n");
  scanf("%d", &num2);

  while(num2 !=0)
  {
   num2 = num2 / 10;
   count ++;
  }
  printf("The num of digits is:%d", count);
  break;

  case 3:
  printf("Enter the num3:\n");
  scanf("%d", num3);

  while(num3!=0)
  {
   rem2 = num3 % 10;
   sum = rem2 + sum;
   num3 = num3 / 10;
  }
  printf("The sum:%d", sum);
  break;

  case 4:
  printf("Enter the num4:\n");
  scanf("%d", &num4);

  if(num4%2==0)
  {
   printf("The number is even");
  }
  else
  {
  printf("The number is odd");
  }
  break;

  case 5:
  printf("Exiting the system");
  break;

  default:
  printf("invalid input");
  break;
 }
return 0; 
}