// using switch case for monday to sunday
#include<stdio.h>
int main()
{
	int num;                       
	printf ("1.M\n2.T\n3.W\n4.T\n5.F\n6.S\n7.S");
	printf ("\nenter num:");             
	scanf ("%d", &num);        
	switch (num)          
	
	{
		case 1:
			printf ("\n Monday");
			break;
		case 2:
		 	printf ("\n Tuesday");
			break;
	    case 3:
			printf ("\n Wednesday");
			break;
		case 4:
			printf ("\n Thursday");
			break;
		case 5:
			printf ("\n Friday");
			break;
		case 6:
			printf ("\n Sturday");
			break;
		case 7:
			printf ("\n Sunday");
			break;
		default:
			printf ("\n enter valid num.");           
	}
}