// 0, 1, 1, 2, 3, 5, 8
//fibo = first + second
#include<stdio.h>
int main()
{
    int first=0, second=1,count=0, n, fibo;
    printf("enter value of n= ");
    scanf("%d",&n);
    while(count<n)
    {
        if(count<=1)
            fibo = count;
        else
            {
                fibo = first + second;
                first=second;
                second = fibo;
            }
        printf("%d ",fibo);
        count++;
    }
    return 0;

}
