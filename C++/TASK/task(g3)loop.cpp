/* use loop for sum of first 10 natural numbers */

#include<iostream>
using namespace std;

int main()
{
	int i, sum=0;
	
	for(i=0; i<=10; i++)
	{
		sum = sum + i;
	}
		cout<<sum;
	return 0;
}