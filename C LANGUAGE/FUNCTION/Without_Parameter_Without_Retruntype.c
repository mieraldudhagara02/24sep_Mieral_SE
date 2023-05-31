#include<stdio.h>
// without parameter without return type

int sum()
{
	int a, b, c;
	
	printf ("Enter value of a and b:");
	scanf ("%d%d", &a, &b);
	
	c = a + b;
	printf ("Addition of and b is:%d", c);
}

int main()
{
	sum();
	return 0;
}