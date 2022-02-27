//if a num is palindrome or not
#include<stdio.h>
int main()
{
    int num, sum=0, rem, temp;
    printf("enter a number: ");
    scanf("%d",&num);
    temp = num;
    while(num!=0)
    {
        rem = num%10;
        sum = sum*10+rem;
        num/=10;
    }
    if(temp==sum)
        printf("this is a palindrome.....\n");
    else
        printf("this is not palindrome....\n");
    return 0;
}
