#include<stdio.h>
int main()
{
	int a,b,c;
	printf ("enter the value of a, b and c:");
	// suppose a=10, b=20, c=30
	// before swapping value
	scanf ("%d%d%d", &a, &b, &c);
	
	a = b; // a = 20
	b = c; // b = 30
	c = a; // c = 20
	// after swapping value
	
	printf ("%d %d %d", a, b, c);
	
	return 0;
}