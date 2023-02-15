/*find sum of series: 1 - 1/2 + 1/3 - 1/4 + ........ nth terms*/
#include <stdio.h>

int main()
{
    int n, i;
    float sum = 1, b = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) 
    {
        if (i % 2 == 0)
        {
            sum -= b / i;
        } 
        else
        {
            sum += b / i;
        }
    }

    printf("Sum of the series: %.2f\n", sum);

}
