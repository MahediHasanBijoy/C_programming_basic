#include<stdio.h>
struct Person
{
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
        printf("Enter age: ");
        scanf("%d",&person[i].age);
        printf("Enter salary: ");
        scanf("%f",&person[i].salary);
    }

    for(i=0; i<4; i++)
    {
        printf("Information for person%d:\n",i+1);
        printf("Age: ");
        printf("%d\n",person[i].age);
        printf("Salary: ");
        printf("%.2f\n",person[i].salary);
    }


}
