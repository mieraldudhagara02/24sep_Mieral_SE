//Global Class

#include<iostream>
using namespace std;

class A
{
	public:
		int a, b;
		int show()
		{
			cout<<"Enter the value of a and b:";
			cin>>a>>b;
			
			cout<<endl<<"Value of a is:"<<a;
			cout<<endl<<"Value of b is:"<<b;
			
			return 0;
		}
};

int main()
{
	A a1;
	a1.show();
	
	return 0;
}