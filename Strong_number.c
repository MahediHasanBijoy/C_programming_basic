#include<stdio.h>
//int fact(int rem);
int main()
{
    int num, sum=0, rem, temp;
    printf("enter a number: ");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem = num%10;
        num = num/10;
        sum = sum + fact(rem);

    }
    if(sum==temp)
        printf("strong number: %d",sum);
    else
        printf("not strong number");

    return 0;
}

int fact(int rem)
{
    int i, fact=1;
    for(i=1; i<=rem; i++)
    {
        fact = fact*i;
    }
    return fact;
}
