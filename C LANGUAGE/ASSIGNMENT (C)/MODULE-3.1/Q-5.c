// a program to check given year is a leap year or not

#include<stdio.h>
int main()
{
	int y, dof;
	// y = year, dof = days of february
	printf ("enter year and days of february in same year:");
	scanf ("%d%d", &y, &dof);
	
	if (dof % 4 == 0)
	
	{
		printf ("\ngiven year is a leap year."); 
	}
	
	else
	{
		printf ("\ngiven year is not a leap year.");
	}
}