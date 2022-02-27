//{10,2,30,15,28,5}
//search the value=15
//find the position of the value

#include<stdio.h>
int main()
{
    int num[]={10,2,30,15,28,5}, pos=-1, val, i;
    printf("enter the value to find: ");
    scanf("%d",&val);
    for(i=0; i<6; i++)
    {
        if(num[i]==val)
        {
            pos=i+1;
            break;

        }
    }
    if(pos==-1)
    {
        printf("not found");
    }
    else
        printf("%d",pos);


    return 0;

}
