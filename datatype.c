#include<stdio.h>
int main()
{
    int A=10;
    float B=10.5;
    double C=10.333333333;
    char D='D';

    printf("integer= %d\nfloating point number=%f\ndouble=%lf\ncharacter=%c\n",A,B,C,D);
    //float num with 1 decimal places
    printf("float like given= %.1f\n",B);
    //float num with 2 decimal places
    printf("float with two decimal point= %.2f\n", B);
    //double with 9 decimal places
    printf("%.9lf\n",C);
    //double with 14 decimal places
    printf("%.14lf",C);


    return 0;

}
