#include<stdio.h>
int main()
{
	int m, n, o, p;
	for (m=0; m<5; m++)
	{
	
		for (n=0; n<=m; n++)
		{
			printf ("*");
		}
		
		printf ("\n");
    }
    for (o=0; o<5 ; o++)
		{
			for (p=4; p>=o; p--)
		{
			printf ("*");
		}	
			printf ("\n");
		}
}