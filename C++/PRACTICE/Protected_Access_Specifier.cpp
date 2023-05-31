/* Protected access specifier
   --> Base Class
   --> Derive Class          */
   
#include<iostream>
using namespace std;

class Miral
{
	protected:
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
};

class Dudhagara : public Miral
{
	public:
		int derived()
		{
			a=20;
			b=30;
			
			cout<<endl<<"Value of a is:"<<a;
			cout<<endl<<"Value of b is:"<<b;
			
			return 0;	
		}	
		
};

int main()
{
	Dudhagara md;
	md.input();
	md.show();
	md.derived();
	
	return 0;
}