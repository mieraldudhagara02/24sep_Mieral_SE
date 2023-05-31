#include<iostream>
using namespace std;

class data
{
	public:
	
	string name;
	int getdata()
	{
		cout<<"enter your name:";
		cin>>name;
		return 0;
	}
	
	int showdata()
	{
		cout<<endl<<"name:"<<name;
		return 0;
	}
};

int main()
{
	data dt;
	dt.getdata();
	dt.showdata();
	return 0;
}