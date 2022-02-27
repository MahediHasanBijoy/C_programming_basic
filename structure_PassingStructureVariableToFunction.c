#include<stdio.h>
struct Person
{
    char name[20];
    int age;
    float salary;
};
void display(struct Person var)
{
    printf("name: %s\n",var.name);
    printf("age: %d\n",var.age);
    printf("salary: %.2f\n",var.salary);
}
int main()
{
    struct Person person1;
    strcpy(person1.name,"mahedi hasan");
    person1.age= 21;
    person1.salary= 25000.5;

    display(person1);

}
