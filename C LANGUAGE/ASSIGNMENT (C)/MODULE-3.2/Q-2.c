// swap value without third person

#include<stdio.h>
int main()
{
	int a, b;
	// before value swapping
	printf ("enter value of a and b:");
	scanf ("%d%d", &a, &b);
	
	// after value swapping
	a = b;
	b = a -1;
	printf ("%d %d", a, b);
}