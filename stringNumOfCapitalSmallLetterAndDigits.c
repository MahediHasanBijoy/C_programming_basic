#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,capital,small,digit;
    printf("Enter a string: ");
    gets(str);
    i=capital=digit=0;
    while(str[i]!='\0')
    {
        ch=str[i];
        if(ch>='a'&&ch<='z')
            small++;
        else if(ch>='A'&&ch<='Z')
            capital++;
        else if(ch>='0'&&ch<='9')
            digit++;
        i++;
    }
    printf("num of capital letters= %d\n",capital);
    printf("num of small letters= %d\n", small);
    printf("num of digits= %d\n",digit);


}
