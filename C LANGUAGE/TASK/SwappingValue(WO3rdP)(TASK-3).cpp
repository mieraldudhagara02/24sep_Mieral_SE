#include<stdio.h>
int main()
{
	int weeks, years;
	int choice;
	printf ("\n1. weeks\n2. years");
	printf ("\nenter your choice:");
	scanf ("%d",&choice);
	printf ("\nno. of week or year:");
	scanf ("%d%d", &weeks, &years);
	switch (choice)
	{
		case 1:
		printf ("\nno. of days:%d", weeks*7);
		break;
		
		case 2:
		printf ("\nno. of days:%d", years*365);
		break;
		
		default:
		printf ("\nenter valid choice........");
		break;
	}
	
	return 0;
}
