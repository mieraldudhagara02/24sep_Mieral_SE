#include<stdio.h>

int main()
{
	int a, b, GCD;
	
	printf ("enter value of a and b:");
	scanf ("%d%d", &a, &b);
	
	if (b==0)
	{
		printf ("\nGCD=%d", a);
	}
	
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	
	printf ("\nGCD = %d", a, b);
}