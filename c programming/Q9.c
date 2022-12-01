#include<stdio.h>
int main()
{
  int i, x;
  for(x=1; x<=100; x++)
  {
    for(i=2; i<x; i++)
    {
      if(x%i==0)
      {
        break;
      }
    }
    
    if(x==i)
    {
      printf("\t%d", x);
    }
  }
}