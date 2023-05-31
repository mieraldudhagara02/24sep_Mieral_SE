#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	
	cout<<"enter value of a and b:";
	cin>>a>>b;
	
	c = a+b;
	cout<<endl<<"addition is:"<<c;
	
	c = a*b;
	cout<<endl<<"multiplication is:"<<c;
	
	c = a/b;
	cout<<endl<<"division is:"<<c;
	
	c = a-b;
	cout<<endl<<"substraction is:"<<c;
	
	c = a%b;
	cout<<endl<<"modulo is:"<<c;
	
	a++;
	cout<<endl<<"after using increment operator value of a is:"<<a;
	
	b--;
	cout<<endl<<"after using decrement operator value of b is:"<<b;
}