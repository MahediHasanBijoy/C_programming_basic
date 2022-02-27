#include<stdio.h>
int main()
{
    int i, j, numOfRow, numOfCol;
    int A[10][10], B[10][10], C[10][10];
    //scan for input of a matrix
    printf("number of row= ");
    scanf("%d",&numOfRow);
    printf("number of col= ");
    scanf("%d", &numOfCol);
    //scan input for array A
    printf("Enter elements of A matrix.\n");
    for(i=0; i<numOfRow; i++)
    {
        for(j=0; j<numOfCol; j++)
        {
            printf("A[%d][%d]= ", i, j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //scan input for array B
    printf("Enter elements of B matrix.\n");
    for(i=0; i<numOfRow; i++)
    {
        for(j=0; j<numOfCol; j++)
        {
            printf("B[%d][%d]= ", i, j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    //printing A matrix
    printf("A= ");
    for(i=0; i<numOfRow; i++)
    {
        printf("\t");
        for(j=0; j<numOfCol; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //Printing B matrix
    printf("B= ");
    for(i=0; i<numOfRow; i++)
    {
        printf("\t");
        for(j=0; j<numOfCol; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    //adding two matrix
    for(i=0; i<numOfRow; i++)
    {
        for(j=0; j<numOfCol; j++)
        {
            C[i][j]= A[i][j]+B[i][j];
        }

    }
    printf("Sum of matrix= \n");
    for(i=0; i<numOfRow; i++)
    {
        printf("\t");
        for(j=0; j<numOfCol; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

}
