#include<stdio.h>
int main()
{
    char str[]="madam";
    char str2[50];
    strcpy(str2,str);
    strrev(str2);
    int d= strcmp(str, str2);
    if(d==0)
        printf("palindrome\n");
    else
        printf("not palindrome\n");
    printf("str1= %s\n",str);
    printf("str2= %s\n",str2);


}
