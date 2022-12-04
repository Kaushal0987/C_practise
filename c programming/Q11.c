#include <stdio.h>
int main()
{
    float result;
    int choice, r, l, b, w, h;
    printf("Press 1 to calculate area of circle\n");
    printf("Press 2 to calculate area of square\n");
    printf("Press 3 to calculate area of triangle\n");
    printf("press 4 to calculate area of rectangle\n");
    printf("Enter your choice:\n");
    scanf("%d", &choice);
      
    switch (choice) 
    {
    case 1: 
    {
        printf("Enter radius:\n");
        scanf("%d", &r);
        result = 3.14 * r * r;
        printf("Area of circle = %f", result);
        break;
    }
    case 2: 
    {
        printf("Enter side of square:\n");
        scanf("%d", &l);
        result = l * l;
        printf("Area of square = %f", result);
        break;
    }
    case 3: 
    {
        printf("Enter base:\n");
        scanf("%d", &b);
        printf("Enter height:\n");
        scanf("%d", &h);
        result = 0.5 * b * h;
        printf("Area of triangle = %f", result);
        break;
    }
    case 4:
    {
        printf("Enter weidth:\n");
        scanf("%d", &w);
        printf("Enter length:\n");
        scanf("%d", &l);
        result = w * l;
        printf("Area of rectangle=%f", result);
        break;
    }
    default:
        printf("wrong Input\n");
    }
    return 0;
}