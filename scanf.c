#include<stdio.h>
int main()
{
    {
        int num1, num2;
        printf("enter two integer num to show:");
        scanf("%d %d",&num1,&num2);
        printf("%d %d", num1, num2);
    }
    {
        float num3, num4;
        printf("enter two float num to show:");
        scanf("%f %f",&num3, &num4);
        printf("%.1f %.1f", num3, num4);
    }

    return 0;
}
