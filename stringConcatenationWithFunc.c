#include<stdio.h>
int main()
{

    char str1[]="my name is ";
    char str2[]="mahedi hasan bijoy ";
    //this function will store str2 to at the end of str1
    strcat(str1,str2);
    printf("str1= %s\n",str1);

    strcat(str1,"and i love programming.");
    printf("new str1= %s\n",str1);

    printf("str2= %s",str2);


}
