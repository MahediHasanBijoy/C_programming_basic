#include<stdio.h>
int main()
{
    char upper, lower;
    printf("enter an uppercase character:");
    scanf("%c",&upper);
    //tolower function is not working in cpp format
    lower = tolower(upper);
    printf("lowercase character: %c", lower);
    return 0;
}
