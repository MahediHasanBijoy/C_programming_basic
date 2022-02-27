#include<stdio.h>
int main()
{
    char str1[]="hello world";
    char str2[]="hello world";
    //strcmp() will return 0 if found eqaul
    int d= strcmp(str1,str2);
    printf("%d",d);
    if(d==0)
        printf("strings are equal");
    else
        printf("strings are not equal");

    return 0;
}
