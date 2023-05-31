#include<stdio.h>
int main()
{
    int a = 5;
    int b = 2;
    
    float c = (float) 5 / 2;
    //Explicit conversion is done manually by placing the type in parentheses () in front of the value.

	printf ("%f", c);
	
	int d = 8;
    int e = 5;
    
    float f = (float) d / e;
    //You can also place the type in front of a variable.

	printf ("\n%f", f);
	
	int num1 = 5;
	int num2 = 2;
	
	float sum = (float) num1 / num2;

	printf("\n%.1f", sum);
	// you could make the output even cleaner by removing the extra zeros (if you like).

    return 0;
}