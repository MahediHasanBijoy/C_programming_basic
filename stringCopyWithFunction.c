#include<stdio.h>
int main()
{
    char source[]="c programming";//no need to give size as initializing
    char target[30];// must give size as not being initialize

    strcpy(target,source);
    printf("source string= %s\n\n",source);
    printf("target string= %s",target);

}
