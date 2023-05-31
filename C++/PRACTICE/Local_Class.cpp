//Local Class

#include<iostream>
using namespace std;

int fun()
{
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
	
	A a1;
	a1.show();
	
	return 0;
}

int main()
{

	fun();
	
	return 0;
}