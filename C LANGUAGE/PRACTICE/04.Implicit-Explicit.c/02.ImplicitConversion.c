#include<stdio.h>
int main()
{
    float a = 8;

    printf ("Value of a is : %f", a);
    //compiler automatically convert the int value 8 to a float value of 8.000000

    int b = 8.4;

    printf ("Value of b is : %d", b);
    //compiler automatically convert the float value 8.4 to a int value of 8

    return 0;
}