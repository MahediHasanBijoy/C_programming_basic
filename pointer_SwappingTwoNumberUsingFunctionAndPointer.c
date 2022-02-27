#include<stdio.h>
//here function parameter is passed by reference
void swapping(int *p1, int *p2)
{
    *p1= *p1+*p2;
    *p2= *p1-*p2;
    *p1= *p1-*p2;

}
int main()
{
    int x=10, y=20;

    printf("before swapping x= %d, y= %d\n",x,y);

    swapping(&x,&y);

    printf("after swapping x= %d, y= %d\n",x,y);

    return 0;
}
