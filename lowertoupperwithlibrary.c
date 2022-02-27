#include<stdio.h>
int main()
{
    char upper, lower;
    printf("enter an lowercase character:");
    scanf("%c",&lower);
    //toupper function is not working in cpp format
    upper = toupper(lower);
    printf("uppercase character: %c", upper);
    return 0;
}
