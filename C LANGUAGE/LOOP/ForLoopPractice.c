#include<stdio.h>

int main()
{
	/* display the first 10 natural numbers
	   ------------------------------------
	   
	int a;
	
	for (a=1; a<=10; a++)
	{
		printf("\t%d", a);
	}
	return 0; */
	
	
	/* sum of the first 10 natural numbers
	   -----------------------------------
	int a;
	int sum = 0;
	
	printf ("First 10 Natural Numbers are:");
	
	for (a=1; a<=10; a++)
	{
		printf ("%d", a);
		sum = sum + a;
	}
	
	printf ("\nSum of 10 Natural Numbers is:%d", sum);
	
	return 0; */
	
	int a, n, sum = 0;
	
	printf ("Enter the value of terms:");
	scanf ("%d", &n);
	
	printf ("\nThe first %d natural numbers are:", n);
	
	for (a=1; a<=n; a++)
	{
		printf ("%d", a);
		sum = sum + a;
	}
	
	printf ("Sum of First %d Natural numbers is:%d",n, sum);
	
	return 0;
} 