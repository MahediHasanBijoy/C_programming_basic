#include<stdio.h>
int f(int *ar, int arSize){

    int r=0;
    for(int i=0; i<arSize; i++){
        r=r^*(ar+i);     // `^` xor operator
    }
    return r;

}
int main()
{
    int y[] = {0,1,1,0,0,1,10};
    printf("%d %d %d %d",f(y,2), f(y,3), f(y,5), f(y,8));

    return 0;

}
