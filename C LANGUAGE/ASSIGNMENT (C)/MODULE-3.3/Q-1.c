// find maximum element from given array
#include<stdio.h>

int main()
{
	int a[10],size,i,max;
	
	printf ("Enter the size of array:");
	scanf ("%d", &size);
	
	for(i=0; i<size; i++)
	{
		scanf ("%d", &a[i]);
	}
	
	max = a[0];
	for(i=0; i<size; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
		printf ("maximum number is : %d",max);
		return 0;
}