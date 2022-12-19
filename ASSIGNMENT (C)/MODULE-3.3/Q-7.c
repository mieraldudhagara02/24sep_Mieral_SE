#include<stdio.h>
int main()
{
	char string[10];
	int i, l=0;
	printf ("\nenter any string:");
	scanf ("%s", &string);
	for (i=0; string[i]!='\0'; i++)
	{
		l++;
	}
	printf ("\n length of string is %d", l);
}