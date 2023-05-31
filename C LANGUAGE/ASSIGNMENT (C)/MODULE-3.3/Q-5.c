#include<stdio.h>
int main()
{
	int a[3], b[3], i, j, k;
	printf ("enter any number:");
    for (i=0; i<3; i++)
    {
    	scanf ("%d", &a[i]);
	}
	
	for (i=0; i<3; i++)
	{
		for (j=i+1; j<3; j++)
		{
			if (a[i] > a[j])
			{
				k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
	}
	
	printf ("ascending order:");
	for (i=0; i<3; i++)
	{
		printf ("%d", a[i]);
	}
	
	printf ("\nenter any number:");
    for (i=0; i<3; i++)
    {
    	scanf ("%d", &b[i]);
	}
	
	for (i=0; i<3; i++)
	{
		for (j=i; j<3; j++)
		{
			if (b[i] < b[j])
			{
				k = b[i];
				b[i] = b[j];
				b[j] = k;
			}
		}
	}
	
	printf ("descending order:");
	for (i=0; i<3; i++)
	{
		printf ("%d", b[i]);
	}
}