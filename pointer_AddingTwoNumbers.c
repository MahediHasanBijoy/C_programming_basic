#include<stdio.h>
int main()
{
    int x=20, y=40;
    int *ptr1, *ptr2;

    ptr1=&x;
    ptr2=&y;

    printf("sum= %d",*ptr1+*ptr2);



}
