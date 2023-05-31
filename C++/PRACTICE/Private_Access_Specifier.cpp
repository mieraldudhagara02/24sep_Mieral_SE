/* Private access specifier
   --> Member of Class
   --> Friend Class          */
   
#include<iostream>
using namespace std;

class A
{
	private:
		  int a, b;
		  
	public:
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
		
		friend class B;
};

class B
{
	public:
		int friendclass(A ref)
		{
			ref.a = 10;
			ref.b = 20;
			
			cout<<"Value of a is:"<<ref.a<<endl;
			cout<<"Value of b is:"<<ref.b<<endl;
			
			return 0;
		}
};

int main()
{
	A a1;
	B b1;
	a1.input();
	a1.show();
	b1.friendclass(a1);
	
	return 0;
}