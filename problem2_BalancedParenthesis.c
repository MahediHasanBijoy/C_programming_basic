#include<stdio.h>
int main()
{
    char ch[100], stk[100];
    int i=0, j=0, len=0, bf=0;
    gets(ch);
    while(ch[i]!='\0')
    {
        if(ch[i]=='(')
        {
          stk[j]=ch[i];
          j++;
        }

        else if(ch[i]=='{')
        {
           stk[j]=ch[i];
           j++;
        }

        else if(ch[i]=='[')
        {
           stk[j]=ch[i];
           j++;
        }
        i++;
    }
    stk[j++]='\0';
    printf("value of j: %d\n", j);
    len= i;
    printf("%d\n",len);
    j=0;
    while(stk[j]!='\0')
    {
        printf("%c\n",stk[j]);
        j++;
    }
    printf("%d\n", j);
}
//[[[][[[]][[[]
