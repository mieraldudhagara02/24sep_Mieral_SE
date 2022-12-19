#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int length, v;
	char string[20];
	
	printf ("enter any string:");
	scanf ("%s", &string);
	
	length = strlen(string);
	length = length - 1;
	
	v = 0;  
	while (length > v)
	{
		if (string[length] != string[v])
		{
			printf ("string is not palindrom", string);
			return 0;
		}
		length--;
		v++;
	}
	printf ("string is palindrom", string);
	return 0;
}