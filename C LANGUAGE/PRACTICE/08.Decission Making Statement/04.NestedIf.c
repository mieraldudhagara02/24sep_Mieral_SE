#include<stdio.h>
int main()
{
	int age;
	printf ("enter age of worker:");
	scanf ("%d", &age);
	
	if (age < 18)
	
	{
		printf ("\nyou are minor.");
		printf ("\nyou are not eligible for work.");
	}
	
	else 
	
	{
		if (age >= 18 && age < 60)
		{
			printf ("\nyou are eligible for work.");
			printf ("\nplease fill your joining form.");
		}
		else
		{
			printf ("\nyou are too old.");
			printf ("\nyou are not eligible for work.");
		}
		
	}
	
	return 0;
}