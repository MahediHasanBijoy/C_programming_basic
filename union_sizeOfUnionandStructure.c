#include<stdio.h>
union test1
{
    int x,y;
};
union test2
{
    char c;
    int x;
};
union test3
{
    double d;
    char name[20];


};
struct test4
{
    char address[20];
    double d;
};
int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;
    printf("size of t1= %d\n", sizeof(t1));
    printf("size of t2= %d\n", sizeof(t2));
    printf("size of t3= %d\n", sizeof(t3));
    printf("size of t4= %d\n", sizeof(t4));


}
