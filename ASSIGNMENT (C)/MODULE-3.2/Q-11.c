// a program for summation of given numbers
// input 1234 ---> output 10 (1+2+3+4=10)

#include<stdio.h>
int main()
{
	int n, r, sum=0;
	// n use for number, r use for reminder
	printf ("enter number:");
	scanf ("%d", &n);
	
	while (n>0)
	{
		r=n%10;
		// reminder = number % 10
		// suppose n=1234(1234%10=(4=reminder))
		sum=sum+r;
		// sum = sum + reminder
		// sum=0, reminder=3
		// sum=0+3
		// sum=3
		n=n/10;
		// number = number / 10
		// now, number is 123
		// so 123/10
		// reminder is 3
		// repeate the process and we'll get the sum of number
	}
	printf ("\nsum of number is:%d", sum);
}