#include<stdio.h>
int main()
{
    char name[20]="My name is Bijoy";
    //making upper case string
    strupr(name);
    printf("%s\n",name);

    //making lower case string
    strlwr(name);
    printf("%s\n",name);


}
