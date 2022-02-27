/*
write a program that takes five positive integer as input and find out the sum if
 the digits repeatedly until result is converged to a single digit.

    simple input:
    N=25 4 1 8 9

    Simple output:
    sum of digits=29(first step)
    sum of digits=11(second step)
    sum of digits=2(final step)

*/
#include<stdio.h>
int main()
{
    int N[5], i, j, sum=0,sum2=0, rem, num;
    printf("enter 5 integer number: ");
    for(i=0; i<5; i++)
    {
        scanf("%d",&N[i]);
    }
    //1st step
    for(i=0;i<5;i++)
    {
        num= N[i];
        while(num!=0)
        {
            rem= num%10;
            sum=sum+rem;
            num= num/10;

        }
    }
    printf("sum= %d\n", sum);
    //2nd step
    while(sum/10!=0){
            num=sum;
            sum=0;
       while(num!=0)
        {
            rem=num%10;
            num=num/10;
            sum=sum+rem;
        }
        printf("sum= %d\n", sum);
    }

    return 0;


}
