/*
1
1 0
1 0 1
*/
#include<stdio.h>
int main()
{
    int row, col, n;
    printf("enter size of triangle: ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            if(col%2==0)
                printf("%d ",0);
            else
                printf("%d ",1);

        }
        printf("\n");
    }
    return 0;
}

