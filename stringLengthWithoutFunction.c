#include<stdio.h>
int main()
{

    char str[30];
    printf("Enter a string: ");
    gets(str);
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    printf("length: %d",i);


}
