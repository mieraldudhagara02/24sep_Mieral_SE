#include<stdio.h>

int a, b, expression;
float m, v;
int getdata()
{	
	printf ("enter value of a, b, m and v:");
	scanf ("%d%d%f%f", &a, &b, &m, &v);
	return 0;
}

int choice()
{
	printf ("\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Modulo");
	printf ("\nEnter your choice:");
	scanf ("%d", &expression);
	return 0;
}

int main()
{
	getdata();
	choice();
	switch(expression)
	{
		case 1:
			printf ("Addition is:%d", a+b);
			break;
		
		case 2:
			printf ("Substraction is:%d", a-b);
			break;
			
		case 3:
			printf ("Multiplication is:%d", a*b);
			break;
			
		case 4:
			printf ("Division is:%f", m/v);
			break;
			
		case 5:
			printf ("Modulo is:%d", a%b);
			break;
	}
}