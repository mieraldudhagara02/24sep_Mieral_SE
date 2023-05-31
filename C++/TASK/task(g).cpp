/* compute the sum of two values, if the two values are same than return triple of their sum */

#include<iostream>
using namespace std;

int main()
{
	int m, d, sum=0;

	cout<<"Enter value of m and d:";
	cin>>m>>d;
	
	if ( m == d)
	{
		sum=3*(m+d);	
	}
	
	else
	{
		sum=m+d;
	}
	
	cout<<"sum is:"<<sum;
	return 0;
}