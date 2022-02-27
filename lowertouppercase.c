#include<stdio.h>
int main()
{
    char ch;
    printf("enter a lowercase: ");
    scanf("%c", &ch);
    int upper=ch-32;
    printf("uppercase: %c\n", upper);
    //another way
    printf("uppercase: %c", ch-32);
}
