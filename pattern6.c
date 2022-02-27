/*
A
B B
C C C
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
        for(col=1; col<=row; col++)
        {

            printf("%c ",row+64);

        }
        printf("\n");
    }
    return 0;
}


