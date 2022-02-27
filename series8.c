//1^2*2^2*3^2*....*n^2
#include<stdio.h>
int main()
{
    int i, mult=1, n;
    printf("enter n= ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        mult = mult * i*i;
    }
    printf("multiplication= %d",mult);
    return 0;
}
