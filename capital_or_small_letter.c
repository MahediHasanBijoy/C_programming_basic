#include<stdio.h>
int main()
{
    char letter;
    scanf("%c",&letter);
    if(letter>='A'&&letter<='Z')
        printf("%c is capital letter",letter);
    else if(letter>='a'&&letter<='z')
        printf("%c is small letter",letter);
    else
        printf("%c is not a letter",letter);
    return 0;
}
