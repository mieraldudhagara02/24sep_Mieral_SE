//Arithmetic Operator

#include<stdio.h>
int main()
{
	int a = 5; 
	int b = 2;
	
	printf ("\naddition is:%d",a+b);
	
	printf ("\nsubstraction is:%d",a-b);
	
	printf ("\nmultiplication is:%d",a*b);
	
	float c = (float) a / b;
    printf ("\ndivision is:%f", c);
    //Explicit Conversion
	
    printf ("\nmodulo is:%d", a%b);
	
	printf ("\nafter using increment operator value of a is:%d",++a);
	
	printf ("\nafter using decrement operator value of b is:%d",--b);
	
    float d = (float) 5 / 2;
    printf ("\ndivision is:%f", d);
	//Explicit Conversion

	return 0;
}