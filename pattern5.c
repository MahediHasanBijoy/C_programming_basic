/*
A
A B
A B C
*/
#include<stdio.h>
int main()
{
    int row, col, n;
    char ch;
    printf("enter size of triangle: ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        ch='A';
        for(col=1; col<=row; col++)
        {

            printf("%c ",ch);
            ch++;

            //another way
            //printf("%c ",col+64); //for capital letter
            //printf("%c ",col+96); //for small letter

        }
        printf("\n");
    }
    return 0;
}

