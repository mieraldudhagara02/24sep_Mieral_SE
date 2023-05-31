// Hierarchical_Inheritance

#include<iostream>
using namespace std;

class A
{
	private:
		int a,b,c;
	public:
		int input()
		{
			cout<<"Enter the value of a and b:";
			cin>>a>>b;
			
			return 0;
		}
		
		int sum()
		{
			c = a + b;
			
			cout<<endl<<"Sum of a and b is:"<<c;
			
			return 0;
		}
};
class B : public A
{
	private:
		int a,b,c;
	public:
		int input()
		{
			cout<<endl<<"Enter the value of a and b:";
			cin>>a>>b;
			
			return 0;
		}
		
		int sub()
		{
			c = a - b;
			
			cout<<endl<<"Substraction of a and b is:"<<c;
			
			return 0;
		}
};

class C : public A
{
	private:
		int a,b,c;
	public:
		int input()
		{
			cout<<endl<<"Enter the value of a and b:";
			cin>>a>>b;
			
			return 0;
		}
		
		int mul()
		{
			c = a * b;
			
			cout<<endl<<"Multiplication of a and b is:"<<c;
			
			return 0;
		}
};

int main()
{
	A a1;
	B b1;
	a1.input();
	a1.sum();
	b1.input();
	b1.sub();
	
	C c1;
	c1.input();
	c1.mul();
	
	return 0;
}