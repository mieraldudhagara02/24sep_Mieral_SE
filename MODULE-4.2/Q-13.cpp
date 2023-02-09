#include<iostream>
using namespace std;

class AB
{
	public:
		int a, b;
		int input()
		{
			cout<<"Enter the value of a and b:";
			cin>>a>>b;
		
			return 0;
		}
		friend int max(AB ob);
};

int max(AB ob)
{
	if (ob.a > ob.b)
	{
		cout<<"Maximum num is:"<<ob.a;
	}
	
	else
	{
		cout<<"Maximum num is:"<<ob.b;
	}
	
	return 0;
}

int main()
{
	AB ab;
	ab.input();
	max(ab);
	
	return 0;
}