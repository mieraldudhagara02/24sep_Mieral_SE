#include<iostream>
using namespace std;

class M
{
	public:
		int age;
		int getdata()
		{
			cout<<"enter your age:";
			cin>>age;
			return 0;
		}
};

class D: public M
{
	public:
		int showdata()
		{
			cout<<"age is:"<<age;
			return 0;
		}
};

int main()
{
	D md;
	md.getdata();
	md.showdata();
	return 0;
}