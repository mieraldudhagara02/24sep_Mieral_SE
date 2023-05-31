#include<stdio.h>

int main()
{
	int Case1;
	int Case2;
	float c;
	float d;
	
	printf ("Enter the value of a and b:");
	scanf ("%f%f", &c, &d);
	
	printf ("1.Choice-1\n\ta.Addition\n\tb.Substraction\n2.Choice-2\n\ta.Multiplication\n\tb.Division");
	printf ("\nEnter your Choice:");
	scanf ("%d", &Case1);
	switch(Case1)
	{
		case 1:
			printf ("\nThis is Case-1.");
			printf ("\nEnter your Choice:");
			scanf ("%d", &Case2);
			switch(Case2)
			{
				case 1:
					printf ("\nAddition of a and b is:%f", c+d);
					break;
					
				case 2:
					printf ("\nSubstraction of a and b is:%f", c-d);
					break;
					
				default:
					printf ("\nEnter valid choice..");
					break;
			}
			break;
			
		case 2:
			printf ("\nThis is Case-2.");
			printf ("\nEnter your Choice:");
			scanf ("%d", &Case2);
			switch(Case2)
			{
				case 1:
					printf ("\nMultiplication of a and b is:%f", c*d);
					break;
					
				case 2:
					printf ("\nDivision of a and b is:%f", c/d);
					break;
					
				default:
					printf ("\nEnter valid choice..");
					break;
			}
			break;
			
		default:
			printf ("Enter valid Choice..");
			break;	
	}
	
	return 0;
}