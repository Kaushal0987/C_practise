#include <stdio.h>

int main() 
{
    int n, a=0, sum=1, i, b=1;
    printf("enter the value of n: ");
    scanf("%d", &n);

    for (i=2; i<=n; i++)
    {
        if(i%2==0)
        {
            sum = sum + (-b/i);
        }
        else
        {
            sum = sum + (b/i);
        }
    }
    printf("\nsum = %d", sum);
}   
