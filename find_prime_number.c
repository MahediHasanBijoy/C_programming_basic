#include<stdio.h>
int main()
{
    int i, num, count=0;
    printf("Enter a positive number: ");
    scanf("%d",&num);

    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        printf("prime");
    else
        printf("Not a prime");

    return 0;

}
