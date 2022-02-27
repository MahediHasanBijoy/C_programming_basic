//Swapping two numbers without using third variable.
#include<stdio.h>
int main()
{
    int x=10, y=20;
    int *p1, *p2;
    p1=&x;
    p2=&y;

    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;

    printf("x=%d\n",*p1);
    printf("y=%d\n",*p2);
}
