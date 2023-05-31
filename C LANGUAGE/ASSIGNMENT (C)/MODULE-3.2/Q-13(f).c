#include<stdio.h>
int main()
{
	int o, p;
	for (o=65; o<=69; o++)
	{
		for (p=65; p<=o; p++)
		{
			printf ("%c", p);
		}
		
		printf ("\n");
	}
}