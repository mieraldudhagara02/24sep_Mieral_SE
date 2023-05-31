#include<stdio.h>
// without parameter with returntype

int sum()
{
	int a, b, c;
	
	printf ("Enter value of a and b:");
	scanf ("%d%d", &a, &b);
	
	c = a + b;
	
	printf ("Addition of a and b is:%d", c);
	return c;
}

int main()
{
	sum();
	return 0;
}