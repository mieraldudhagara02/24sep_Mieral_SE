//Friend Function

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
		
		friend int friendfunction(A a1);
};

int friendfunction(A a1)
{
	int c;
	c = a1.a + a1.b;
	
	cout<<endl<<"Sum of a and b is:"<<c;
	
	return 0;
}

int main()
{
	A ab;
	ab.show();
	friendfunction(ab);
	
	return 0;
}