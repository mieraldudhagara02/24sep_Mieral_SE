#include<stdio.h>
int main()
{
	int grandtotal;
	// suppose students have 7 subjects and grandtotal is 700
	printf ("enter grand total of examination:");
	scanf ("%d", &grandtotal);
	
	// grandtotal is 640 or more than 640, students get 'A' grade
	if (grandtotal >= 640)
	
	{
		printf ("\nyou got 'A' grade");
		printf ("\n Many Many Congratulations");
	}
	
	// grandtotal is 600 or more than 600, students get 'B' grade
	else if (grandtotal >= 600)
	
	{
		printf ("\nyou got 'B' grade");
		printf ("\nCongratulations");
	}
	
	// grandtotal is 540 or more than 540, students get 'C' grade
	else if (grandtotal >= 540)
	
	{
		printf ("\nyou got 'C' grade");
		printf ("\nCongratulations");
	}
	
	// grandtotal is less than 540, students didn't get any grade
	else
	
	{
		printf ("\nyou didn't get grade");
		printf ("\nBetter Luck Next Time");
		printf ("\nGod Bless You");
	}
	
	return 0;
}