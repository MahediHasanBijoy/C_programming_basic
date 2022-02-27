#include<stdio.h>
float triangleArea(float base, float height);
int main()
{
    float base, height;
    float area;

    printf("enter base: ");
    scanf("%f", &base);
    printf("enter height: ");
    scanf("%f", &height);

    area = triangleArea(base, height);

    printf("%.2f\n", area);

    return 0;


}

float triangleArea(float a, float b)
{
    return .5*a*b;
}
