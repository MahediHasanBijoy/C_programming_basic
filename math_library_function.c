#include<stdio.h>
#include<math.h>
int main()
{
    double x = 10;
    double result = log(x);
    //log(x)
    printf("log(%lf) = %lf\n",x,result);
    result = log10(x);
    //log10(x)
    printf("log10(%lf) = %lf\n",x,result);

    //exp(x)
    result = exp(x);
    printf("exp(%lf) = %lf\n",x,result);

    //sin(x)
    result = sin(x);
    printf("sin(%lf) = %lf\n",x,result);
    return 0;
}
