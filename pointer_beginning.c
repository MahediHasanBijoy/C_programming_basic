#include<stdio.h>
int main()
{
    int x=5;
    int *p;
    p=&x;

    printf("value of x= %d\n",x);
    printf("address of x= %d\n",&x);
    printf("address of p= %d\n",p);
    printf("content of p= %d\n",*p);
    printf("address of p variable= %d\n",&p);



}
