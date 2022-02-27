#include<stdio.h>
int main()
{
    char str1[50]="my name is ";
    char str2[]="mahedi hasan. ";

    int i=0, len=0, j=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("%d",len);
    while(str2[j]!='\0')
    {
        str1[len++]=str2[j];
        j++;
    }
    printf("str1= %s\n",str1);
    printf("str2= %s\n",str2);


}
