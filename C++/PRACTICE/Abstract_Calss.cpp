//Abstarct_Class

#include<iostream>
using namespace std;

class A
{
	public:
		virtual int show() = 0;
};

class B : public A
{	public:
		int a=1, b=2;
		int show()
		{
			cout<<"Value of a is:"<<a<<endl;
			cout<<"Value of b is:"<<b;
			
			return 0;
		}
};

int main()
{
	B mir;
	mir.show();
	
	return 0;
}