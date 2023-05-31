#include<iostream>
using namespace std;

class Apple
{
	public:
		
	char Type1, Type2;
	int getdata()
	{
		cout<<"Enter Types of Apple:";
		cin>>Type1;
		cin>>Type2;
	}
};

class T1: public Apple
{
	public:
		
	int type1()
	{
		cout<<"This is Green Apple.";
	}
};

class T2: public Apple
{
	public:
		
	int type2()
	{
		cout<<"This is Red Apple.";
	}
};

int main()
{
	T1 t1;
	T2 t2;
	
	t1.getdata();
	t1.type1();
	t2.type2();
	
	return 0;
}