#include<stdio.h>
int main()
{
    int size, array[100], i, max=0, min;
    printf("enter size of array: ");
    scanf("%d",&size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&array[i]);

    }
    min=array[0];
    for(i=0; i<size;i++)
    {
        if(max<=array[i])
        {
            max=array[i];
        }
        if(min>=array[i])
        {
            min= array[i];
        }
    }
    printf("maximum= %d\nminimum= %d\n", max, min);

    return 0;
}
