#include<stdio.h>
struct person
{
    int age;
    float salary;
};
int main()
{

    struct person p1={27,30000};//initializing during declaration;
    struct person p2,p3;
    //element wise assignment
    p2.age= 20;
    p2.salary=25000;

    //structure variable assingment
    p3=p2;


/*
    printf("enter information of person1: \n");
    printf("enter age: ");
    scanf("%d",&p1.age);

    printf("enter salary: ");
    scanf("%f",&p1.salary);

*/
    printf("person1: \n");
    printf("\tage= %d\n",p1.age);
    printf("\tsalary= %.2f\n",p1.salary);

    printf("person2: \n");
    printf("\tage= %d\n",p2.age);
    printf("\tsalary= %.2f\n",p2.salary);

    printf("person3: \n");
    printf("\tage= %d\n",p3.age);
    printf("\tsalary= %.2f\n",p3.salary);
    return 0;

}
