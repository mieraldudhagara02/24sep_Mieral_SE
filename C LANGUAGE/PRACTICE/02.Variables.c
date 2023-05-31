#include<stdio.h>

int main()
{
    int a = 1;
    printf("%d\n", a);
    // stores integers (whole numbers), without decimals, such as 0 to 9 and -1 to -9 

    int b;
    printf("Enter the value of a:");
    scanf("%d", &b); //here, %d is formate specifier for [int] variable
    printf("%d\n", b);
    // you can also declare a variable without assigning the value

    int c;
    c=1;
    printf("%d\n", c);
    // you can also assign the value later

    float d = 1.1;
    printf("%f\n", d);

    char e = 'f';
    printf("%c\n", e);

    int f = 1;
    char g = 'h';
    printf("Int is %d and Char is %c", f, g);

    return 0;
}