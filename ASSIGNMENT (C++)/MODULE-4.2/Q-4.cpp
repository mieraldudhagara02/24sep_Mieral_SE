#include<iostream>
using namespace std;

class getdata
{
	public:
		int a, b, m;
		getdata()
		{
			cout<<"\nEnter value of a and b:"<<endl;
			cin>>a>>b;
		}
};

class addition : public getdata
{
	public:
		addition()
		{
			m = a + b;
			cout<<"Addition is:"<<endl<<m;
		}
};

class substraction : public getdata
{
	public:
		substraction()
		{
			m = a - b;
			cout<<"substraction is:"<<endl<<m;
		}
};

class multiplication : public getdata
{
	public:
		multiplication()
		{
			m = a * b;
			cout<<"multiplication is:"<<endl<<m;
		}
};

class division : public getdata
{
	public:
		division()
		{
			m = a / b;
			cout<<"division is:"<<endl<<m;
		} 
};

int main()
{
	addition add;
	substraction sub;
	multiplication mul;
	division div;
}