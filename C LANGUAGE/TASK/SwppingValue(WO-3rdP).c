#include<stdio.h>
int main()
{
	int a, b;
	printf ("enter the value of a and b:");
	// suppose a=20, b=21
	// before swapping value
	scanf ("%d%d", &a, &b);
	
	a = b; // a = 21
	b = a-1; // b = 20
	printf ("%d %d", a, b);
	// after swapping value
	
	return 0;
}