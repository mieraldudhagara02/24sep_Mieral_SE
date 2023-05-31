#include<iostream>
using namespace std;

class Getdata
{
	public:
		
	float a, b;
	int getdata()
	{
		cout<<"Enter value of a and b:";
		cin>>a>>b;
	}
};

class Addition: public Getdata
{
	public:
	
	int addition()
	{
		return a + b;	
	}			
};

class Substraction: public Getdata
{
	public:
		
	int substraction()
	{
		return a - b;
	}
};

class Multiplication: public Getdata
{
	public:
		
	int multiplication()
	{
		return a * b;
	}
};

class Division: public Getdata
{
	public:
	
	int division()
	{
		return a / b;
	}
};

int main()
{
	Addition a;
 	Substraction s;
 	Multiplication m;
    Division d;
	int expression;
	
	cout<<"\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division";
	cout<<endl<<"Enter your choice:";
	cin>>expression;
	switch (expression)
	
	{
		case 1:
			a.getdata();
			cout<<a.addition();
			break;
			
		case 2:
			s.getdata();
			cout<<s.substraction();
			break;
			
		case 3:
			m.getdata();
			cout<<m.multiplication();
			break;
			
		case 4:
			d.getdata();
			cout<<d.getdata();
			break;
			
		default:
			cout<<"Enter valid choice."<<endl;
			break;
	}
	
	return 0;
}