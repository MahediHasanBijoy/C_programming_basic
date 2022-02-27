#include<stdio.h>
int main()
{
    int size, fibo[100], i;
    printf("enter size of fibonacci: ");
    scanf("%d",&size);
    fibo[0]=0;
    fibo[1]=1;
    for(i=2; i<size; i++)
    {
        fibo[i]= fibo[i-2]+fibo[i-1];

    }
    for(i=0; i<size; i++)
    {
        printf("%d ",fibo[i]);
    }
}
