#include<stdio.h>
int main()
{
	int a, b, c=1;
	for (a=0; a<5; a++)
	{
		for (b=0; b<=a; b++)
		{
			printf ("\t%d", c++);	
		}	
		printf ("\n");
	}
}