//Floyd's triangle
/*
1
2 3
4 5 6
7 8 9 10

*/
#include<stdio.h>
int main()
{
    int row, col, n, count=1;
    printf("enter n= ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
}
