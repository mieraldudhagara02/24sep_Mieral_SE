// a program for summation of first and last degit of number

#include<stdio.h>
int main()
{
	int n, ld, sum=0;
	// n use for number and ld use for last digit
	printf ("enter any number:");
	scanf ("%d", &n);
	
	ld=n%10;
	/* suppose n = 123
	so, (123%10=(ld=3))
	here last digit of number is 3 */
	
	while (n>9)
	// here (n>9) because we need 2 or more digit number for summation of first and last digit of number
	{
		n=n/10;
		/* here n=12
		(12/10=(reminder=2))
		so first digit of number 123 is 1 */
	}
	
	sum = n + ld;
	printf ("\nsummation of first and last digit is:%d", sum);
}