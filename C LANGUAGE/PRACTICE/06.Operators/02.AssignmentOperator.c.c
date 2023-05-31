//Assignment Operator

#include<stdio.h>
int main()
{
	int a, b;
	printf ("enter the value of a and b:");
	scanf ("%d%d", &a, &b);
	
	a += b;
	// a = a + b
	printf ("\nvalue of a is:%d", a);
	
	a -= b;
	// a = a - b
	printf ("\nvalue of a is:%d", a);
	
	b *= a;
	// b = b * a
	printf ("\nvalue of b is:%d", b);
	
	b /= a;
	// b = b / a
	printf ("\nvalue of b is:%d", b);
	
	a <<= b;
	// a = a << b
	printf ("\nvalue of a is:%d", a);
	
	a >>= b;
	// a = a >> b
	printf ("\nvalue of a is:%d", a);
	
	a &= b;
	// a = a & b
	printf ("\nvalue of a is:%d", a);
	
	a ^= b;
	// a = a ^ b
	printf ("\nvalue of a is:%d", a);
	
	a |= b;
	// a = a | b
	printf ("\nvalue of a is:%d", a);
	
	a %= b;
	// a = a % b
	printf ("\nvalue of a is:%d", a);
	
	
	
	return 0;
}