#include<stdio.h>
#include<string.h>
int main()
{
	char string1[5], string2[5];
	int cmp;
	
	printf ("\nenter any two strings to check max. string:");
	scanf ("%s%s", &string1, &string2);
	
	cmp=strcmp(string1,string2);
	
	if (cmp>0)
	printf ("\nmax. string is:%s", string1);
	
	else if (cmp == 0)
	printf ("\nboth are equle.");
	
	else
	printf ("\nmax. string is:%s", string2);
//printf("%d",cmp);
}