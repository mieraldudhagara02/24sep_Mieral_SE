/* Public access specifier
   --> Inside the Class
   --> Outside the Class          */
   
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
		
		int show()
		{
			cout<<endl<<"Value of a is:"<<a;
			cout<<endl<<"Value of b is:"<<b;
			
			return 0;
		}
};

int main()
{
	A a1;
	a1.input();
	a1.show();
	a1.a=10;
	cout<<endl<<"Value of a outside the	class is:"<<a1.a;
	a1.b=20;
	cout<<endl<<"Value of b outside the class is:"<<a1.b;
	
	return 0;
}