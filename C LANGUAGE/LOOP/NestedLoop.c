#include<stdio.h>
int main()
{
	int a, b;
	a = 0;
	b = 0;
	
	while ( a < 6)
	{
		while ( b < 5)
		{
			printf ("%d",b);
			b++;
		}
		printf ("%d",a);
		a++;
	}
}