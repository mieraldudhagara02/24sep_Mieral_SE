// sum of even numbers by using loop

#include<stdio.h>
int main()
{
	int i, n, sum=0;
	printf ("enter a limit:");
	scanf ("%d", &n);
	printf ("even numbers from 1 to %d:", n);
	
	for (i=1; i<=n; i++)
	{
		if  (i % 2 == 0)
		{
			printf ("%d", i);
			sum = sum + i;
		}
	}
	printf ("\nsum of all even numbers are:%d", sum);
}