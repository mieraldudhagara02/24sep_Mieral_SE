#include<stdio.h>
struct employee
{
	char name[10]; 
	char address[10];
	int number, age;
}e[5];
int main()
{
	int i;
	
	for (i=0; i<5; i++)
	
	{
		printf ("enter name of employee:");
		scanf ("%s", & e[i].name);

		printf ("\nenter address of emloyee:");
		scanf ("%s", & e[i].address);

		printf ("\nenter number of employee:");
		scanf ("%d", & e[i].number);

		printf ("\nenter age of employee:");
		scanf ("%d", & e[i].age);
	}

printf ("information of employees:");

for (i=0; i<5; i++)
	{
		printf ("\nname of employee:%s", e[i].name);
		printf ("\naddress of employee:%s", e[i].address);
		printf ("\nnumber of employee:%d", e[i].number);
		printf ("\nage of employee:%d", e[i].age);
	}
}