#include<stdio.h>
int main()
{
    int a = 2, c=1;
    c=1?a=0:2;
    printf("a= %d, c= %d",a,c);
    return 0;
}
