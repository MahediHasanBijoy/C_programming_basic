#include<stdio.h>
int main()
{
    int first[10][10],second[10][10], result[10][10], r1,r2, c1,c2, i, j, k, sum=0;

    printf("enter rows and cols for first matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("enter rows and cols for second matrix: ");
    scanf("%d%d", &r2, &c2);

    while(c1!=r2)
    {
        printf("error!! col of first matrix is not equal to row of second matrix.\n");
        printf("enter rows and cols for first matrix: ");
        scanf("%d%d", &r1, &c1);
        printf("enter rows and cols for second matrix: ");
        scanf("%d%d", &r2, &c2);
    }
    //taking input for first matrix
    printf("enter elements of first matrix:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("first[%d][%d]=",i,j);
            scanf("%d",&first[i][j]);
        }
    }
    //taking input for second matrix
    printf("enter elements of second matrix:\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("second[%d][%d]=",i,j);
            scanf("%d",&second[i][j]);
        }
    }

    //printf first matrix
    printf("first matrix: \n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {
            printf("%d ", first[i][j]);
        }
        printf("\n");
    }
    //printf first matrix
    printf("second matrix: \n");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ", second[i][j]);
        }
        printf("\n");
    }
    //multiplication of matrix
    //result matrix will have num of rows from first matrix and num of col from second matrix
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2;j++)
        {
            for(k=0; k<c1; k++ )
            {
                sum = sum + first[i][k]*second[k][j];

            }
            result[i][j]=sum;
            sum=0;
        }
    }
    //printf result matrix
    printf("second matrix: \n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }


}
