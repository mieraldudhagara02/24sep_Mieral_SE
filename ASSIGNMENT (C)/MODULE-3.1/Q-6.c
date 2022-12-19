// a program for converting years into days and days into years

#include<stdio.h>
int main()
{
	float nod, y;
	// nod = no of days, y = years
	printf ("enter no. of days and years:");
	scanf ("%f%f", &nod, &y);
	
	// for coverting days into years
	y = nod / 365;
	// suppose 365 days = 1 year, than 730 days = ?
	// so, 730 * 1 / 365 = 2 years
	printf ("\nno of years:%f", y);
	
	// for converting years into days
	nod = nod / y;
	// suppose 1 year = 365 days, than 2 years = ?
	// so, 365 * 2 = 730 days
	printf ("\nno of days:%f", nod);
}