// find factorial using recursion
#include<stdio.h>
 int facto(int no)
{
	if (no <= 1)
	
	return 1;
	
	return no * facto (no-1);
}
int main()
{
	printf ("\nvalue of facto is:%d", facto(5));
	
	return 0;
}