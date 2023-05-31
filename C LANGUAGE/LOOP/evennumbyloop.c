// take 10 num. input from user and find out how many even num. are there by using loop

#include<stdio.h>
int main()
{
	int num, i;
	i=1;
	while (i<=10)
	{
		// suppose numbers are between 1 to 10
		printf ("enter a number:");
		scanf ("%d", &num);
		i++, i++;
	}
	printf ("\neven numbers are:%d", i);
}