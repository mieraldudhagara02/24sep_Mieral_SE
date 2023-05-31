// using switch case for vowels and consonants

#include<stdio.h>
int main()
{
	int no;
	printf ("1.A\n2.E\n3.I\n4.O\n5.U\n6.a\n7.e\n8.i\n9.o\n10.u");
	printf ("\nenter a no:");
	scanf ("%d", &no);
	switch (no)
	
	{
		case 1:
			printf ("\n A is vowel.");
			break;
		case 2:
			printf ("\n E is vowel.");
			break;
		case 3:
			printf ("\n I is vowel.");
			break;
		case 4:
			printf ("\n O is vowel.");
			break;
		case 5:
			printf ("\n U is vowel.");
			break;
		case 6:
			printf ("\n a is vowel.");
			break;
		case 7:
			printf ("\n e is vowel.");
			break;
		case 8:
			printf ("\n i is vowel.");
			break;
		case 9:
			printf ("\n o is vowel.");
			break;
		case 10:
			printf ("\n u is vowel.");
			break;
		default:
			printf ("\n remainings are consonants.");
			// consonants are between 'B' to 'Z' excluding A, E, I, O, U and also between 'B' to 'z' excluding a, e, i, o, u
	}
}