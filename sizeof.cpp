#include <stdio.h>
int main(){
//%lu means unsigned int or unsigned long
//we can use %d instead of %lu, output will be same
printf("int=%lu byte\n", sizeof(int));
printf("character=%lu byte\n", sizeof(char));
printf("float=%lu byte\n", sizeof(float));
printf("double=%lu byte\n", sizeof(double));
printf("short int=%lu byte\n", sizeof(short int));
printf("long int=%lu byte\n", sizeof(long int));

return 0;

}
