#include<stdio.h>

int main()
{
	//The memory size (in bytes) of a data type or a variable can be found with the sizeof operator
	
	int a;
	float b;
	double c;
	char d;

		printf("%lu\n", sizeof(a));
		printf("%lu\n", sizeof(b));
		printf("%lu\n", sizeof(c));
		printf("%lu\n", sizeof(d));
		/* Note that we use the %lu format specifer to print the result, instead of %d. 
		It is because the compiler expects the sizeof operator to return a long unsigned int (%lu), instead of int (%d). 
		On some computers it might work with %d, but it is safer to use %lu. */
}