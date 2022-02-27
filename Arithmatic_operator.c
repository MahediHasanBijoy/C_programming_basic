//write a program to find the sum of two integer
//then find average of these numbers
#include<stdio.h>
int main()
{
    int num1, num2, sum;
    printf("enter two number= ");
    scanf("%d %d",&num1, &num2);
    sum=num1+num2;
    printf("sum= %d\n",sum);

    /* arithmatic operation between two integer will result an integer output, to avoid this one of operand
    must convert into floating point number*/
    float avg = (float)sum/2;    //to convert sum into float typecasting is used
    printf("average= %.2f", avg);
    return 0;
}
