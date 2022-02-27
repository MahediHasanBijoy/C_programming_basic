#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter three numbers= ");
    scanf("%d %d %d",&num1, &num2, &num3);
    if(num1>num2 && num1>num3)
    {
        printf("greatest= %d\n",num1);
        if(num2<num3)
            printf("lowest=%d\n",num2);
        else
            printf("lowest=%d\n",num3);
    }
    else if(num2>num1 && num2>num3)
    {
        printf("greatest=%d\n",num2);
        if(num1<num3)
            printf("lowest=%d\n",num1);
        else
            printf("lowest=%d\n",num3);
    }
    else
    {
        printf("greatest=%d\n",num3);
        if(num1<num2)
            printf("lowest=%d\n",num1);
        else
            printf("lowest=%d\n",num2);
    }


    return 0;
}
