//Function Template

#include<iostream>
using namespace std;

template <class M> //Function Template
M show(M a,M b)
{
	cout<<"Enter the value of a and b:";
	cin>>a>>b;
	
	cout<<endl<<"Value of a is:"<<a;
	cout<<endl<<"Value of b is:"<<b;
	
	return 0;
}

int main()
{
	int m, v;
	show(m,v);
	
	return 0;
}