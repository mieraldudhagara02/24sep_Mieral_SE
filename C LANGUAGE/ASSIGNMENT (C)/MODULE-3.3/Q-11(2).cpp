#include<stdio.h>
struct employee
{char name[5];
int number;
}e;

union student
{
char name[5];
int number;	
}s;

int main()
{
//structure
printf ("STRUCTURE");
printf ("\nenter name of employee:");
scanf ("%s", & e.name);

printf ("\nenter number of employee:");
scanf ("%d", & e.number);

//union
printf ("\nUNION");
printf ("\nenter number of student:");
scanf ("%d", & s.number);

printf ("\nenter name of student:");
scanf ("%s", & s.name);

printf ("\nname of employee:%s", e.name);
printf ("\nnumber of employee:%d", e.number);
printf ("\nnumber of student:%d", s.number);
printf ("\nname of student:%s", s.name);
}

