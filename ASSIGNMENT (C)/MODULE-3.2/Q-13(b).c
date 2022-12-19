/* use loop for given below output
A
B C
D E F
G H I J
K L M N O */
// use ascii table

#include<stdio.h>
int main()
{
	int a, b, c=65;
	for (a=65; a<=69; a++) // raws
	{
		for (b=65; b<=a; b++) // columns
		{
			printf ("%c", c++);
		}
		
		printf ("\n");
	}
}