#include<stdio.h>
int main()
{
	float a, b;
	int expression;
	printf ("enter two numbers:");
	scanf ("%f%f", &a, &b);
	printf ("1. addition\n2. substraction\n3. multiplication\n4. division");
	scanf ("%d", &expression);
	switch (expression)
	
	{
		case 1:
		printf ("\naddition is:%f", a+b);
		break;
		
		case 2:
		printf ("\nsubstraction is:%f", a-b);
		break;
		
		case 3:
		printf ("\nmultiplication is:%f", a*b);
		break;
		
		case 4:
		printf ("\ndivision is:%f", a/b);
		break;
		
		default:
		printf ("\nenter valid choice.");
		break;
	}
}