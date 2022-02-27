//1*2*3*.....*n (multiplication of 1 to n)
#include<stdio.h>
int main()
{
    int i, mult=1, n;
    printf("enter n= ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        mult = mult * i;
    }
    printf("multiplication= %d",mult);
    return 0;
}

