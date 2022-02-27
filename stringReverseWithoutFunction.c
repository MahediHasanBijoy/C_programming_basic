#include<stdio.h>
int main()
{
    char str[]="hello world";
    char str2[50];
    int i=0, len=0;
    while(str[i]!='\0')
    {
        i++;
        len++;
    }
    i=0;
    for(int j=len-1; j>=0; j--)
    {
        str2[j]=str[i];
        i++;
    }
    printf("%s",str2);



}
