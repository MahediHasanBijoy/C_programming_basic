#include<stdio.h>
#define N 5
int stack[N];
int top=-1;

void push()
{
    int x;
    printf("enter data: ");
    scanf("%d",&x);
    if(top==N-1)
        printf("overflow!\n");
    else
    {
        top++;
        stack[top]=x;
    }
}

void pop()
{
    if(top==-1)
        printf("underflow!");
    else
    {
        top--;
    }
}

void display()
{
    int i;
    for(i=top; i>-1; i--)
    {
        printf("%d\n",stack[i]);
    }
}
int main()
{
    push();
    push();
    push();
    push();
    push();
    pop();
    pop();
    display();
}
