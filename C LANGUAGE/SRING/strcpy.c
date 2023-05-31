#include<stdio.h>
#include<string.h>
int main()
{
	char string1[1], string2[1];
	printf ("\nenter your first string:");
	scanf ("%s", &string1);
	
	strcpy (string2, string1);
	printf ("\nyour copied string is:%s", string2);
}