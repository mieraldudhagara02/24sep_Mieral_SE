#include<stdio.h>
#include<string.h>

int main()
{
	char strA[20], strB[20];
	int i;
	
	printf ("enter string A:");
	scanf ("%s", &strA);
	
	printf ("\nenter string B:");
	scanf ("%s", &strB);
	
		if (strA[i] > strB[i])
		{
			printf ("\nstring A is grater than string B.");
		}
		else
		{
			printf ("\nstring B is grater than string A.");
		}
	
	return 0;
}