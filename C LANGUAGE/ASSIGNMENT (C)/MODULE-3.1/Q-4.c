// a program for finding simple interest

#include<stdio.h>
int main()
{
	float p,r,n;
	// where p=principal amount, r=rate of interest, n=time duration
	printf ("enter value of p, r and n:");
	scanf ("%f%f%f", &p, &r, &n);
	
	//simple interest : p * r * n / 100
	// assuming that time duration is given in year
	printf ("\nsimple interest is:%f", p * r * n / 100);
}