#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    switch(x)
    {
        case 1: printf("choice is 1");
        break;
        case 2: printf("choice is 2");
        break;
        case 3: printf("choice is 3");
        break;
        case 4: printf("choice is 4");
        break;
        default: printf("choice other than 1,2,3,4");
        break;
    }
    return 0;
}
