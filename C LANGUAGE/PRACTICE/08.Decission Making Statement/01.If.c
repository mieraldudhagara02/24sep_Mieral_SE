#include<stdio.h>
int main()
{
	int score;
	// imagine you have participated in elocution competition
	// total score of competiton is 10
	printf ("enetr the score");
	scanf ("%d", &score);
	
	// your scored more than 7, you are entered in final round 
	if (score > 7)
	
	{
	printf ("\nFinal contestant");
	printf ("\nCongratulations");
    }
    
	return 0;
}