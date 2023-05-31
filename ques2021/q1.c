#include<stdio.h>
int main()
{
 int i, j, k;

 for(i=0; i<5; i++)
 {
  for(j=i; j<5; j++)
  {
   if(j%2==0)
   {
    printf("1");
   }
   else
   {
    printf("0");
   }
  }
  printf("\n");
  for(k=0; k<=i; k++)
  {
   printf(" ");
  } 
 }
 return 0;
}