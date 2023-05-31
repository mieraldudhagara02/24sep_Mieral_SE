#include<iostream>
using namespace std;

class A
{
	public:
		int a, b;
		int input()
		{
			cout<<"Enter the value of a and b:";
			cin>>a>>b;
			
			return 0;
		}
		
		friend class B;
};

class B
{
	public:
		int c;
		int sum(A a1)
		{
			c = a1.a + a1.b;
		
			cout<<endl<<"Sum of a and b is:"<<c;
			
			return 0;
		}
};

int main()
{
	A a;
	B b;
	a.input();
	b.sum(a);
}