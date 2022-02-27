//sum and avg of array
#include<stdio.h>
int main()
{
    int array[5],sum=0, i;
    float avg;
    for(i=0; i<5; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0; i<5; i++)
    {
        sum= sum + array[i];
    }
    avg = (float)sum/5;
    printf("%d\n",sum);
    printf("%.2f\n",avg);
    return 0;
}
