/* if you don't want others (or yourself) to change existing variable values, you can use the const keyword.
 this will declare the variable as "constant", which means unchangeable and read-only.
 when you declare a constant variable, it must be assigned with a value. */
 
 #include<stdio.h>
 int main()
 {
 	const int minutesperhour = 60;
 	
 	printf ("%d", minutesperhour);
 	
 	
 	/*const float pi;
 	pi = 3.14;
 	
 	printf ("%f", pi);*/
 	// error
 	
 	return 0;
 }