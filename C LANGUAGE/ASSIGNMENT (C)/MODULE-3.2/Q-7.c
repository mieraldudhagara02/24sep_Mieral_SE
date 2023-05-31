// a program for print factorial of given number

#include<stdio.h>
int main()
{
	int i, n, fact=1;
	// i use for loop, n use for number, fact=1 use for result store
	printf ("enter any number:");
	scanf ("%d", &n);
	
	for (i=1; i<=n; i++)
	{
		fact = fact * i;
		printf ("\nfactorial of %d is %d", n, fact);               
	} 
}  
//for (i=n; i>=1; i--){fact = fact * i;printf ("\nfactorial of %d is %d", n, fact);}
		