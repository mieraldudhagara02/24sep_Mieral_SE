// simple calculator
// arithmetic operators

#include<stdio.h>
int main()
{
	int x, y;
	float a, b; // float variables for division
	
	printf ("enter value of x and y:");
	scanf ("%d%d", &x, &y);
	
	printf ("\naddition is:%d", x+y);
	printf ("\nsubstraction is:%d", x-y);
	printf ("\nmultiplication is:%d", x*y);
	printf ("\nmodulo is:%d", x%y);
	
	printf ("\nenter value of a and b:");
	scanf ("%f%f", &a, &b);
	
	printf ("\ndivision is:%f", a/b);
}