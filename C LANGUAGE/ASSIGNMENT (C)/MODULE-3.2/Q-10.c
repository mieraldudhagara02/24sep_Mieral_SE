// a program for find out max. number of given number
// input 840184 ---> output 8

#include<stdio.h>
int main()
{
	int a, b, c;
	printf("enter three value:");
	scanf ("%d%d%d", &a, &b, &c);
	
	if (a>b && a>c)
	{
		printf ("\na is max.");	
	}
	else
	{
		if (b>c && b>a)
		{
			printf ("\nb is max.");
		}
		else
		{
			if (c>a && c>b)
			{
				printf ("\nc is max.");
			}
		}
	}
}