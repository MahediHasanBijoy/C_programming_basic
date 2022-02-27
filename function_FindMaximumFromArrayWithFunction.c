#include<stdio.h>
int maximum(int a[])
{
    int i=0,result=0;
    for(i=0;i<7;i++)
    {
        if(a[i]>result)
            result=a[i];
    }
    return result;
}

int main()
{
    int arr[]={3,5,2,11,9,7,8}, max;
    max=maximum(arr);
    printf("%d",max);

}
