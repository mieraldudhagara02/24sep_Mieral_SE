#include<stdio.h>
// with parameter with returntype

int sum(int a, int b)
{
	int c;
	
	printf ("Enter value of a and b:");
	scanf ("%d%d", &a, &b);
	
	c = a + b;
	
	printf ("Addition of a and b:%d", c);
	return c;
}

int main(int a, int b)
{
	sum(a, b);
	return 0;
}