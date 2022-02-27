//1^2+2^2+3^2+4^2+.....+n^2
#include<stdio.h>
int main()
{
    int i, sum=0, n;
    printf("enter n= ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum = sum+(i*i);
    }
    printf("sum= %d",sum);
    return 0;
}
