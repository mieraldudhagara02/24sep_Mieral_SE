 #include<stdio.h>
 int main()
 {
 	// area of circle
 	
 	float redious;
 	printf ("enter value of redious:");
 	scanf ("%f", &redious);
 	
 	// area of circle : pie * redious * redious
 	printf ("\narea of circle is:%f", 3.14 * redious * redious);
 	
 	
 	
 	// area of rectangle
 	
 	float l, w;
 	printf ("\nenter value of l and w:");
 	scanf ("%f%f", &l, &w);
 	
 	//area of rectangle : length * width
 	printf ("\narea of rectangle is:%f", l * w);
 	
 	
 	//area of triangle
 	
 	float b, h;
 	printf ("\nenter value of b and h:");
 	scanf ("%f%f", &b, &h);
 	
 	//area of triangle : 1/2 * b * h
 	printf ("\narea of triangle is:%f",  b * h / 2);
 }