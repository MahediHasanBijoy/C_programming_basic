#include<stdio.h>
int main()
{
    char source[]="c programming";
    char target[30];
    int i=0;
    while(source[i]!='\0')
    {
        target[i]=source[i];
        i++;
    }
    printf("target string= %s",target);



}
