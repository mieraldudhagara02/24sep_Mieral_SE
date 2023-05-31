#include<stdio.h>
#include<string.h>
int main()
{
	char fnm[10], lnm[10];
	
	printf ("\nenter your first name:");
	scanf ("%s", &fnm);
	
	printf ("\nenter your last name:");
	scanf ("%s", &lnm);
	
	strcat(fnm,lnm);
	
	printf ("\nenter your full name:%s", fnm);
}