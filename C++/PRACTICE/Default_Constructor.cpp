//Default Constructor

#include<iostream>
using namespace std;

class A
{
	int a, b;
	public:
		A()
		{
			cout<<"Enter the value of a and b:";
			cin>>a>>b;
			
			
			cout<<endl<<"Value of a is:"<<a;
			cout<<endl<<"Value of b is:"<<b;

		}
};

int main()
{
	A miral;
	
	return 0;
}
