// use ternary operator for finding, given no. is odd or even

#include<stdio.h>
int main()
{
	int no;
	printf ("enter value of no:");
	scanf ("%d", &no);
	
	(no % 2 == 0) ?
	// suppose no. = 4
	// (4 % 2 == 0)
	// (0 == 0), than, no. 4 is even no.
	printf ("\nno. is even.") :
		
	// suppose no. = 5
	// (5 % 2 == 0)
	// (1 != 0), that's why, no. 5 is odd no.
	printf ("\nno. is odd.");
}