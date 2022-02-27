#include<stdio.h>
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person p1,p2;

    p1.age    = 20;
    p1.salary = 30000;
    p2.age    = 30;
    p2.salary = 40000;

    printf("person1 age= %d\n",p1.age);
    printf("person1 salaray= %.2f\n",p1.salary);
    printf("person2 age= %d\n",p2.age);
    printf("person2 salary= %.2f\n",p2.salary);

    getche();

    return 0;
}
