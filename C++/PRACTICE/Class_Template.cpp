//Class Template

#include<iostream>
using namespace std;

template <class M>  //Class Template
class A
{
	M a, b;
	public:
		A(M x,M y)
		{
			a = x;
			b = y;
			
			cout<<"Value of a is:"<<a;
			cout<<endl<<"Value of b is:"<<b;
	
		}
};

int main()
{
	A <int> mir (2,4);
	
	return 0;
}