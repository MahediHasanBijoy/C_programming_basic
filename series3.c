//1*2+2*3+3*4+.....+n1*n2
#include<stdio.h>
int main()
{
    int n1,n2,sum=0,a=1,b=2;
    printf("enter the last two number of the series: ");
    scanf("%d %d",&n1,&n2);
    for(a, b; a<=n1; a++,b++ )
    {
        sum = sum+a*b;
    }

    printf("sum=%d",sum);
    return 0;
}
