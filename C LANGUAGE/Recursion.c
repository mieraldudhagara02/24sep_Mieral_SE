// recursion

#include<stdio.h>

int factorial(int n);

int factorial (int n)
{
	int m;
	
	printf ("Enter the value of m:");
	scanf ("%d", &m);
	
	printf ("The value of Factorial %d is: \n%d", m, factorial(m));
	
	
	if (n==0 || n==1)
	{
		return 1;
	}
	
	else
	{
		return n*factorial(n-1);
	}
}

int main()
{
	int n;
	factorial(n);	
}