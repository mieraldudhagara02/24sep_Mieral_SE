#include<stdio.h>
int main()
{
	int a, b, c, d;
	for (a=0; a<=5; a++)
	{
		for (b=5; b>=a; b--)
	{
		printf (" ");
	}
		for (c=0; c<=a; c++)
	{
		printf ("*");
	}
		for (d=1; d<=a; d++)
	{
	    printf ("*");		
	}
		printf ("\n");
	}
	
}