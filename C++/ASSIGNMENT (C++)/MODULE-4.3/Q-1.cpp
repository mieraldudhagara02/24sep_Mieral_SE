//Swap the two values using Template

#include<iostream>
using namespace std;

template <class M> //Function Template
M swap(M a,M b)
{
	//a=12,b=11
	a=b;
	b=a+1;
	
	cout<<endl<<"Value of a is:"<<a;
	cout<<endl<<"Value of b is:"<<b;
	
	return 0;
}

int main()
{
	int m, v;
	swap(12,11);
	
	return 0;
}