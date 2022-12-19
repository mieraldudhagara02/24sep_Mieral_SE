/* reverse a string (sentance) */
#include<stdio.h>

int main()
{
	printf ("enter any string:");
	reverse();
	return 0;
}

int reverse()
{
	char m;
	scanf ("%c", &m);
	if (m != '\n')
	{
		reverse();
		printf ("%c", m);
	}
	return 0;
}