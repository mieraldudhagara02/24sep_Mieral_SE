/* use loop for given below output
1
10
101
1010
10101 */

#include<stdio.h>
int main()
{
	int p, q;
	
	for (p=1; p<=5; p++) // raws
	
	{
		for (q=1; q<=p; q++) // columns
		{
			printf ("%d", q%2);
			/* we use q%2 because we want 1 in first raw 
			here, q=1 so, (1%2=(reminder=1)) 
			now, 1 is our first raw*/
	
			/* here, we use q%2 because we want 1 in first column in second raw 
			and 0 in second column in second raw 
			now, q=1 so, (1%2=(reminder=1)) and  (2%2=(reminder=0))
			so finally, 1 and 0 is our second raw*/
			
			// here we get second column in second raw because loop 'p' is execute 2 times
			// same process will be executing 5 times and we get our output
		}
		
		printf ("\n");
	}
}