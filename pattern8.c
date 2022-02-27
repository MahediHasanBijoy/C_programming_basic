/*
3 3 3
2 2
1


*/
#include<stdio.h>
int main()
{
    int row, col, n;
    printf("enter n= ");
    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",row);
        }
        printf("\n");
    }
    return 0;
}
