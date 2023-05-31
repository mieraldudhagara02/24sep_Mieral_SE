//Default_Parameterized_Copy Constructor

#include<iostream>
using namespace std;

class A
{
	public:
		int a, b;
		A()
		{
			cout<<"Enter the value of a and b:";
			cin>>a>>b;
			
			cout<<endl<<"Value of a is:"<<a;
			cout<<endl<<"Value of b is:"<<b;
			
		}
		
		A(int x,int y)
		{
			a=x;
			b=y;
		}
		
		A(A &mir)
		{
			a = mir.a;
			b = mir.b;
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
	A obj;
	A obj1(1,2);
	obj1.show();
	A obj2=obj1;
	obj2.show();
	
	return 0;
}