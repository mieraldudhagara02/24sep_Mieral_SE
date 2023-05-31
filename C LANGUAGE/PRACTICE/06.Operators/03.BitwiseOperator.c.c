#include<stdio.h>
int main()
{
	int a, b;
	printf ("enter the value of a and b:");
	scanf ("%d%d", &a, &b);
	
	printf ("\nbitwise AND of a and b is:%d",a&b);
	printf ("\nbitwise OR of a and b is:%d",a|b);
	printf ("\nbitwise XOR of a and b is:%d",a^b);
	printf ("\nbitwise compliment of a and b is:%d",~a);
	printf ("\nbitwise 1 shift left of a is:%d",a<<1);
	printf ("\nbitwise 1 shift right of b is:%d",b>>1);
	
	return 0;
}