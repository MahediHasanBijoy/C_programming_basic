#include<stdio.h>
int main()
{
    char firstName[30], lastName[30] ;
    printf("enter first name: ");
    //scanf only take input before whitespace
    scanf("%s",firstName);
    printf("enter last name: ");
    /*you have to use this getchar as after scanf there will be an extra newline in buffer that
    is read by next scanf or gets function.*/
    getchar();
    //this function can take a text as input
    gets(lastName);


    printf("%s %s",firstName, lastName);



}
