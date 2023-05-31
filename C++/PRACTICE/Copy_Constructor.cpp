//Copy Constructor

#include<iostream>
using namespace std;

class A
{
	public:
		int a, b;
		A(int x,int y) //Parameters
		{
			a=x;
			b=y;
		}
		
		A(A &ref)
		{
			a=ref.a;
			b=ref.b;
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
	A obj(1,2);
	obj.show();
	A obj1=obj;
	obj1.show();
	
	return 0;
}