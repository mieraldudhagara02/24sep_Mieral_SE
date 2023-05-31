// Function Overriding

#include<iostream>
using namespace std;

class A
{
	public:
		int a=10, b=10, c;
		int sum()
		{
			c = a + b;
			cout<<"Sum of a and b is:"<<c;
			
			return 0;
		}
};

class B : public A
{
	public:
		int a=20, b=10, c;
		int sum()
		{
			c = a + b;
			cout<<endl<<"Sum of a and b is:"<<c;
			
			return 0;
		}
};

int main()
{
	A ba;
	B ab;
	ba.sum();
	ab.sum();
	
	return 0;
}