#include<iostream>
using namespace std;

class AB
{
	public:
		int a, b;
		int input()
		{
			cout<<endl<<"Enter the value of a and b:";
			cin>>a>>b;
			
		
			return 0;
		}
		
		friend int swap(AB ob);
};

int swap(AB ob)
{
	ob.a = ob.b;
	ob.b = ob.a-1;
	cout<<"After swaping values of a and b is:"<<ob.a<<endl<<ob.b;
	return 0;				
}

int main()
{
	AB ab;
	ab.input();
	swap(ab);
	
	return 0;
}