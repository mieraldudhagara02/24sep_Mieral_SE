#include<stdio.h>
void sum(int[2][2], int[2][2]);
void sub(int[2][2], int[2][2]);
int main()
{
	int a[2][2], b[2][2], i, j;
	printf ("\nenter first matrix:");
	for (i=0; i<2; i++)
		for (j=0; j<2; j++)
			scanf ("%d", &a[i][j]);
			
	printf ("\nenter second matrix:");
	for (i=0; i<2; i++)
		for (j=0; j<2; j++)
			scanf ("%d", &b[i][j]);
			
	sum (a, b);
	sub (a, b);
	return 0;
}

void sum(int a[2][2], int b[2][2])
{
	int c[2][2], i, j;
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf ("%d", c[i][j]);
		}
		
		printf ("\n");
	}
}

void sub(int a[2][2], int b[2][2])
{
	int c[2][2], i, j;
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf ("%d", c[i][j]);
		}
		
		printf ("\n");
	}
}