#include<stdio.h>
int main()
{
    int num, rem, sum, temp, i;
    for(i=1; i<=1000; i++){
        num=i;
        sum=0;
        temp = num;
        while(num!=0)
        {
            rem = num%10;
            sum = sum+ rem*rem*rem;
            num = num/10;
        }
        if(temp==sum)
            printf("%d\n",sum);

    }



    return 0;
}

