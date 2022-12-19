#include<stdio.h>
struct employee
{
	char name[10], address[10];
	int number, age;
}e;
int main()
{
printf ("enter name of employee:");
scanf ("%s", & e.name);

printf ("\nenter address of emloyee:");
scanf ("%s", & e.address);

printf ("\nenter number of employee:");
scanf ("%d", & e.number);

printf ("\nenter age of employee:");
scanf ("%d", & e.age);

printf ("\nname of employee:%s", e.name);
printf ("\naddress of employee:%s", e.address);
printf ("\nnumber of employee:%d", e.number);
printf ("\nage of employee:%d", e.age);
}