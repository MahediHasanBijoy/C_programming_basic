//Program for nth fibonacci number with recursion
#include<stdio.h>
int fibo(int n)
{
    if(n<=1)
        return n;

    return fibo(n-1)+fibo(n-2);
}
int main()
{

    int num;
    printf("enter a num: ");

    scanf("%d",&num);

    printf("%dth fibonacci number= %d ", num, fibo(num));


}
