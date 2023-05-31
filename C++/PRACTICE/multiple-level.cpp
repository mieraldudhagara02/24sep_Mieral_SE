#include<iostream>
using namespace std;

class e1
{
	public:
	int e1id;
	char e1name[5];
	int e1getdata()
	{
		cout<<endl<<"enter your id number:";
		cin>>e1id;
		
		cout<<endl<<"enter your name:";
		cin>>e1name;
		return 0;
	}
};

class e2
{
	public:
	int e2id;
	char e2name[5];
	int e2getdata()
	{
		cout<<endl<<"enter your id number:";
		cin>>e2id;
		
		cout<<endl<<"enter your name:";
		cin>>e2name;
		return 0;
	}
};

class ad: public e1, public e2
{
	public:
	int showdata()
	{
		cout<<endl<<"--------e1--------";
		cout<<endl<<"id is:"<<e1id;
		cout<<endl<<"name is:"<<e1name;
		cout<<endl<<"--------e2--------";
		cout<<endl<<"id is:"<<e2id;
		cout<<endl<<"name is:"<<e2name;
		return 0;
	}
};

int main()
{
	ad a1;
	cout<<"\t\t\tenter data";
	cout<<endl<<"--------e1's data--------";
	a1.e1getdata();
	cout<<"\t\t\tenter data";
	cout<<endl<<"--------e2's data--------";
	a1.e2getdata();
	cout<<endl<<"\t\t\tshow data";
	a1.showdata();
	return 0;
}