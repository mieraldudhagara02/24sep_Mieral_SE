#include<stdio.h>
int main()
{
	int a, b, c, d;
	for (a=5; a>=1; a--)
	{
		printf ("\n");
		for (b=1; b<=a; b++)
		{
			printf ("%d", b);
		}
		for (c=4; c>=a; c--)
		{
			printf ("  ");
		}
		for (d=1; d<=a; d++)
		{
			printf ("%d", d);
		}
	}
	for (a=2; a<=5; a++)
	{
		printf ("\n");
		for (b=1; b<=a; b++)
		{
			printf ("%d", b);
		}
		for (c=4; c>=a; c--)
		{
			printf ("  ");
		}
		for (d=1; d<=a; d++)
		{
			printf ("%d", d);
		}
	}
} 