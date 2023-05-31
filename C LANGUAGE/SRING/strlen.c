#include<stdio.h>
#include<string.h>
int main()
{
	char string[5];
	int length;
	printf ("\nenter any string:");
	scanf ("%s", &string);
	length = strlen(string);
	printf ("\nlength of string is:%d", length);
}