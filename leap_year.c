#include<stdio.h>
int main()
{
    int  year;
    printf("enter year= ");
    scanf("%d",&year);
    //1st condition if divisible by 400 then leap year
    if(year%400==0)
        printf("leap year");
    //2nd condition if divisible by 4 and not divisible by 100 then leap year
    else if(year%4==0&&year%100!=0)
        printf("leap year");
    else
        printf("not a leap year");
    return 0;
}
