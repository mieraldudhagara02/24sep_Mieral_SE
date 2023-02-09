#include<iostream>
using namespace std;

class student
{
	public:
		int percentage;
		
		int sgetdata()
		{
			cout<<endl<<"Enter percentage of student:";
			cin>>percentage;
			cout<<"your percentage is:"<<percentage;
			return 0;
		}
};

class teacher
{
	public:
		int salary;
		
		int tgetdata()
		{
			cout<<endl<<"Enter salary of teacher:";
			cin>>salary;
			cout<<"your salary is:"<<salary;
			return 0;
		}
};

class person : public student, public teacher
{
	public:
		char name[10];
		int age;
		
		int pgetdata()
		{
			cout<<endl<<"Enter your name:";
			cin>>name;
			cout<<"your name is:"<<name;
			cout<<endl<<"Enter your age:";
			cin>>age;
			cout<<"your age is:"<<age;
			return 0;
		}
};

int main()
{
	person p1;
	p1.sgetdata();
	p1.tgetdata();
	p1.pgetdata();
	return 0;
}