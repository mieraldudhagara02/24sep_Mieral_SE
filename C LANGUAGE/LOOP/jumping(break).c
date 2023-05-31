#include<stdio.h>
int main()
{
	int i;
	for (i = 1; i <= 5; i++)
	{
		if ( i % 2 == 0)
		{
			break;
		}
		else
		{
			printf ("%d", i);
		}
	}
}