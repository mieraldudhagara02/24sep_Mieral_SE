// a program for print reverse number of given number
// input 12345 ---> output 54321

#include<stdio.h>
int main()
{
	int i, r;
	// i use for number, r use for reminder
	// suppose i = 12345
	printf ("enter number:");
	scanf ("%d", &i);
	
	do
	{
		r = i % 10;
		// 5 = 12345 % 10
		// so r=5 (reminder)
		printf ("%d", r); 
		i = i / 10;
		// now, i=1234
		// 1234/10 (reminder=4)
		// i = 123
	} while (i > 0);
	// ( 12345 > 0)
}