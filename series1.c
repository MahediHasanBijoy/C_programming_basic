//1+2+3+......+n
#include<stdio.h>
int main()
{
    int n, sum=0,i;
    printf("enter the last number of the series: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum= sum+i;
    }
    printf("sum= %d",sum);
    return 0;
}
