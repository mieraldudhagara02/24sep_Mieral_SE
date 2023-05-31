//Friend Class

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
		
		friend class B;
};

class B
{
	public:
		int x, y;
		int friendclass(A mir)
		{
			x=mir.a;
			y=mir.b;
			
			cout<<endl<<"Value of x is:"<<x;
			cout<<endl<<"Value of y is:"<<y;
			
			return 0;
		}
};

int main()
{
	A meera;
	meera.show();
	B miral;
	miral.friendclass(meera);
	
	return 0;
}