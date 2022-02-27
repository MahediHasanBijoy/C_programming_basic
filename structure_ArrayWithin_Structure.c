#include<stdio.h>
struct Person{
    char name[50];
    int age;
    float salary;

};
int main()
{
    struct Person person[4];
    int i;

    for(i=0; i<4; i++)
    {
        printf("enter information for person%d:\n",i+1);
        printf("Enter name: ");
        gets(person[i].name);
        printf("Enter age: ");
        scanf("%d",&person[i].age);
        printf("Enter salary: ");
        scanf("%f",&person[i].salary);
        //to read an extra new line left by scanf function.
        getchar();

    }

    for(i=0; i<4; i++)
    {
        printf("\nInformation for person%d:\n",i+1);
        printf("Name: ");
        printf("%s\n",person[i].name);
        printf("Age: ");
        printf("%d\n",person[i].age);
        printf("Salary: ");
        printf("%.2f\n",person[i].salary);
    }


}
