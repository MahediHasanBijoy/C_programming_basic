//take an positive integer and find sum of its digits
#include<stdio.h>
int main()
{
    int num, sum=0, rem, qtn=1;
    printf("enter a positive integer: ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        num = num/10;
        sum+=rem;
    }
    printf("%d\n",sum);
    return 0;


}
