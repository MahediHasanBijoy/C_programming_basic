#include<stdio.h>

void display(int x[])
{
    int i;
    x[0]=10;
    for(i=0; i<9; i++)
    {
        printf("%d ", x[i]);
    }

}



int main()
{
    int num[]={2,3,4,6,7,8,9,10,11};
    display(num);


}
