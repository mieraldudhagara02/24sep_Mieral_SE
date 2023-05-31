#include<stdio.h>
int main()
{
	float redious;
	printf ("enter the value of redious:");
	scanf ("%f", &redious);
	
	printf ("area of circle is:%f", 3.14 * redious * redious);
	
	int a;
	printf ("enter the value of a:");
	scanf ("%d",&a);
	
	printf ("\ncube of a is:%d", a*a*a);
	
	printf ("\narea of square:%d", a*a);
	
	int l,w;
	printf ("enter the value of l and w:");
	scanf ("%d%d", &l, &w);
	
	printf ("\narea of rectangle:%d", l*w);
}