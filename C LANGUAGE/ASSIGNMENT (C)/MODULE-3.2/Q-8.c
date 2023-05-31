// a program for print a fabonacci series upto given numbers

#include<stdio.h>
int main()
{
	int n, i, x=0, y=1, z; // suppose n = 5
	// x=0 and y=1, because fabonacci series is starts with 0 and 1
	printf ("enter number of term:");
	scanf ("%d", &n);
	
	for (i=0; i<=n; i++)            // i increase by 1, because of i++
	// we taken n=5, so i<=5        // 1<=5
	{                               // x=1, y=1, z=1 so, x + y = z, 1+1=2 
		printf ("%d\t", x);         // x = y, x = 1
		z = x + y;                  // y = z, y = 2
		// 0 + 1 = 1 
		x = y;
		// x = 1
		y = z;
		// y = 1
	}
}