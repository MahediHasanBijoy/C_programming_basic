#include<stdio.h>
int main()
{
    int i;
    char a,b,c,d;
    printf("enter which function you want: ");
    scanf("%d",&i);
    getchar();
    if(i==1)
    {
        //take a character from input stream and returns it
        a=getc(stdin);
        printf("getc returns= %c\n",a);
    }
    else if(i==2)
    {
        //take a character from input stream and returns it
        b=getchar();
        printf("getchar returns= %c\n",b);
    }
    else if(i==3)
    {
        //take a character from input and return it without
        //waiting for enter key
        c=getch();
        printf("getch returns= %c\n",c);
    }
    else
    {
        //take a character and returns it without waiting
        //for enter key
        d=getche();
        printf("getche returns= %c\n",d);
    }



}
