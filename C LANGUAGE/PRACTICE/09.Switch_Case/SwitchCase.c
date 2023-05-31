//Instead of writing many if...else statements, you can use the switch statement

#include<stdio.h>
int main()
{
	float a, b;
	int expression;
	printf ("enter the value of a and b:");
	scanf ("%f%f", &a, &b);
	printf ("\n 1.addition\n 2.substraction\n 3.multiplication\n 4.division");
	printf ("\nenter your choice");
	scanf ("%d", &expression);
	switch (expression)
		{
			case 1:
			printf ("\naddition is:%f", a+b);
			break;
			
			case 2:
			printf ("\nsubstraction is:%f", a-b);
			break;
			
		/* break keyword:
		 
		When C reaches a break keyword, it breaks out of the switch block.

		This will stop the execution of more code and case testing inside the block.

		When a match is found, and the job is done, it's time for a break. There is no need for more testing.

		A break can save a lot of execution time because it "ignores" the execution of all the rest of the code in the switch block. */
			
			case 3:
			printf ("\nmultiplication is:%f", a*b);
			break;
			
			case 4:
			printf ("\ndivision is:%f", a/b);
			break;
			
			default:
				//The default keyword must be used as the last statement in the switch, and it does not need a break.
			printf ("enter valid choice.....");
			break;
		}
		
		return 0;
}