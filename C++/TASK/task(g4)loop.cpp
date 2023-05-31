/* use loop for display n terms of natural numbers and their sum */

#include<iostream>
using namespace std;

int main()
{
	int n, i, sum=0;
	
	cout<<"enter limit:";
	cin>>n;
	
	for (i=0; i<=n; i++)
	{
		sum = sum + i;
	}
	
	cout<<"sum of numbers are:"<<sum;
}