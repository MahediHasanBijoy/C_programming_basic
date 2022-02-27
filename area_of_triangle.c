//print the area of a triangle
#include<stdio.h>
int main()
{
    float base, height, area;
    printf("Enter base: ");
    scanf("%f",&base);
    printf("\nEnter height: ");
    scanf("%f",&height);
    area = (float)1/2 * base * height;
    printf("Area of triangle: %.2f\n",area);
    return 0;

}
