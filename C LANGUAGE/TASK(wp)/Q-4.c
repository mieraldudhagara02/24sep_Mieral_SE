#include<stdio.h>

int main()
{
	int n, r, sum = 0, v;
	
	printf ("Enter any value:");
	scanf ("%d", &n);
	v = n;
	
	while (n>0)
	{
		r = n % 10;
		sum = (r * r * r) + sum;
		n = n / 10;
	}
	
	if (sum = v)
	{
		printf ("\nNumber is armstrong.");
	}
	
	else
	{
		printf ("\nNumber is not armstrong.");
	}
	
	return 0;
}