//1+3+5+....+n
//difference is 2
#include<stdio.h>
int main()
{
    int n, sum=0, i;
    printf("enter last number of the series: ");
    scanf("%d",&n);
    for(i=1; i<=n; i=i+2)
    {
        sum = sum+i;
    }
    printf("sum= %d\n", sum);
    return 0;
}
