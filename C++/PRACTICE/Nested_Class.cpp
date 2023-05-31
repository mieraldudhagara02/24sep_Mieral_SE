//Nested Class

#include<iostream>
using namespace std;

class A
{
	public:
		
	class B
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
};

int main()
{
	A::B b1;
	b1.input();
	b1.show();
	
	return 0;
}