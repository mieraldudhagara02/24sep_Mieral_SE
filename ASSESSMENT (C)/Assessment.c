#include<stdio.h>

int a, b, c, d, expression;

int getdata()
{
	printf ("Enter the value of a, b, c and d:");
	scanf ("%d %d %d %d", &a, &b, &c, &d);
	
	return 0;
}

int choice()
{
	printf ("\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division");
	printf ("\nEnter your choice:");
	scanf ("%d", &expression);
	switch (expression)
	{
		case 1:
				printf ("\nAddition is:%d", a+b);
			break;
		
		case 2:
			printf ("\nSubstraction is:%d", a-b);
			break;
			
		case 3:
			printf ("\nMultiplication is:%d", a*b);
			break;
			
		case 4:
			printf ("\nDivision is:%d", c/d);
			break;
			
		default:
			printf ("\nEnter valid choice...");
			break;
	}
}

 int main()
 {
 	int m;
 	getdata();
 	choice();
 	
 do
 {
 	{	
 		printf ("\nIf you want another choice than perss 1 or else 2:");
 		scanf ("%d", &m);
 		
 		if (m==1)
 		{
 		choice();
 		}
 		else
 		{
 			break;
		}
	}
} while (m==1);
}