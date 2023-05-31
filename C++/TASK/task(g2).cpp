// get the difference between n and 51. if the difference is grater than 51 than return triple of their difference

#include<iostream>
using namespace std;
int main()
{
	int n, d=0, m, t;
	
	cout<<"Enter value of n:";
	cin>>n;
	
	d=n-51;
	cout<<"difference is:"<<d;
	m=d;
		
	if (m>51)
	{
		t=3*m;	
	}
	cout<<endl<<"triple of difference:"<<t;
}