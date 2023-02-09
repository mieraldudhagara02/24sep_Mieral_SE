#include<iostream>
using namespace std;

class students
{
	public:
		int rn;
		
		int sgetdata()
		{
			cout<<"Enter Roll Number of student:";
			cin>>rn;
			cout<<"Your Roll Number is:"<<rn;
			return 0;
		}
};

class test : public students
{
	public:
		int marks;
		
		int tgetdata()
		{
			cout<<endl<<"Enter Marks obtained in two subjects:";
			cin>>marks;
			cout<<"Your marks of two subjects is:"<<marks;
			return 0;
		}
};

class result : public test
{
	public:
		int tmarks;
		
		int rgetdata()
		{
			cout<<endl<<"Enter Total Marks obtain in test:";
			cin>>tmarks;
			cout<<"Your Total Marks of test:"<<tmarks;
			return 0;
		}
};

int main()
{
	result re;
	re.sgetdata();
	re.tgetdata();
	re.rgetdata();
	return 0;
}