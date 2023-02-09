#include<iostream>
using namespace std;

class data
{
	public:
		
		string dname, atype;
		// here, dname for dipositer's name and atype for account type
		int anum, bamount;
		// here anum for account number and bamount for bank amount
	
		int getdata()
		{
			cout<<"Enter your name:";
			cin>>dname;
			cout<<endl<<"Your name is:"<<dname;
			cout<<endl<<"Enter your account number:";
			cin>>anum;
			cout<<endl<<"Your account number is:"<<anum;
			cout<<endl<<"Enter your account type:";
			cin>>atype;
			cout<<endl<<"Your account type is:"<<atype;
			cout<<endl<<"Enter your account balance:";
			cin>>bamount;
			cout<<endl<<"Your account balance is:"<<bamount;
			
			return 0;
		}
		
};

class deposite : public data
{
	public:
		
		int amount;
		
		int amountt()
		{
			cout<<endl<<"How many amount you want to deposite in your account?";
			cin>>amount;
			amount+=bamount;
			cout<<endl<<"Now, Your total amount is:"<<amount;
			
			return 0;
		}
};

class withdraw : public deposite
{
	public:
		
		int balance;
		
		int balancee()
		{
			cout<<endl<<"How many amount you want to withdraw?";
			cin>>balance;
			if (amount<balance)
			{
				cout<<endl<<"You have not sufficient amount in your bank account to withdraw money.";	
			}	
			
			else
			{
				cout<<endl<<"Your withdrawal is successfully done.";
			}
			
			return 0;
		}
};

class display : public withdraw
{
	public:
		
		string name;
		int bal;
		
		int data()
		{
			cout<<endl<<"Your name is:"<<dname;
			
			amount -= balance;
			cout<<endl<<"Your balance is:"<<amount;
			
			return 0;
		}
};

int main()
{
	display d1;
	d1.getdata();
	d1.amountt();
	d1.balancee();
	d1.data();
	
	return 0;
}