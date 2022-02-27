//1.5+2.5+3.5+......+n
//this is a floating number series
#include<stdio.h>
int main()
{
    float n, sum=0,i;
    printf("enter the last number of the series: ");
    scanf("%f",&n);
    for(i=1.5; i<=n; i++)
    {
        sum = sum+i;
    }
    printf("sum = %.2f",sum);
    return 0;
}
