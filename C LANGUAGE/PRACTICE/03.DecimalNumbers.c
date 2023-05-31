#include<stdio.h>

int main()
{
    float a;

    printf("Enter the value of a:");
    scanf("%f",&a);

 /* If you want to remove the extra zeros (set decimal precision), you can use a dot (.) followed by a number that specifies how many digits that should be shown after the decimal point.

 printf("%.2f\n",a); // Only show 2 digits after point */

    printf("Value of a is: %.1f",a); 

    return 0;
}