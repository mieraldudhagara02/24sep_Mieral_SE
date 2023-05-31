// sum of odd numbers by using loop

#include<stdio.h>
int main()
{
	int i, n, sum=0;
	printf ("enter a limit:");
	scanf ("%d", &n);
	printf ("odd numbers from 1 to %d:", n);
	
	for (i=1; i<=n; i++, i++)
	{
		if  (i % 2 != 0)
		{
			printf ("%d", i);
			sum = sum + i;
		}
	}
	printf ("\nsum of all odd numbers are:%d", sum);
}