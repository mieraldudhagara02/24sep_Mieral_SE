#include<stdio.h>
int main()
{
	int a = 0, b = 0;
	
	while ( a < 5) // a is use for rows
	{
		while ( b < 5) // b is use for cols
		{
			printf ("\n%d", b);
			b++;
		}
		printf ("\n%d", a);
		a++;
	}
}