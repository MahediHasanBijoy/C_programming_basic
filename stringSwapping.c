#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="Bangladesh";
    char str2[20]="America";
    char temp[20];

    printf("before swapping.\n");
    printf("str1= %s\n",str1);
    printf("str2= %s\n\n",str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("after swapping.\n");
    printf("str1= %s\n",str1);
    printf("str2= %s\n",str2);

    return 0;


}
