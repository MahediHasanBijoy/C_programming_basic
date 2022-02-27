//1+1/2+1/3+1/4+....+1/n
#include<stdio.h>
int main()
{
    int n, i;
    float sum=0;
    printf("enter n= ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum = sum+((float)1/i);
    }
    printf("%.2f",sum);
    return 0;

}
